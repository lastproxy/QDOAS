#! /usr/bin/perl -w

use strict;
use Getopt::Long;
use Pod::Usage;
use Date::Calc qw(:all);

my $doas_cl = "/bira-iasb/proj_dyn/DOAS/Programmes/QDOAS-linux/bin/doas_cl";
my $basedir = "/bira-iasb/data/SATELLITE/AURA/OMI/L1B/NASA";
my $irradiance = "OML1BIRR.003";

my $productname;
my $project;
my $tracks;
my $config;
my $output;
my $verbose = 0;
my $spectrum; # filename of a single spectrum which should be analyzed
my $dateranges; # list of dates in yyyy/mm/dd format, of the form date1-date2,date3-date4
my $test;
my $man= 0;
my $help = 0;
my $xtrackmode = "IGNORE";

# track selection based on reported anomalous tracks at http://www.knmi.nl/omi/research/product/rowanomaly-background.php
#my @autoselectedtracks = (["2004/222", "0-59"],
#                          [sprintf("2007/%03d",Day_of_Year(2007,6,25)), "0-52,55-59"],
#                          [sprintf("2008/%03d",Day_of_Year(2008,5,11)), "0-36,43-52,55-59"],
#                          [sprintf("2008/%03d",Day_of_Year(2008,12,3)), "0-36,45-52,55-59"],
#                          [sprintf("2009/%03d",Day_of_Year(2009,1,24)), "0-26,45-52,55-59"]);
#
my %producttypes = ('UG' => "OML1BRUG.003",
                    'UZ' => "OML1BRUZ.003",
                    'VG' => "OML1BRVG.003",
                    'VZ' => "OML1BRVZ.003");

GetOptions('verbose' => \$verbose,
	   'output=s' => \$output,
	   'spectrum=s' => \$spectrum,
	   'dates=s' => \$dateranges,
	   'trackselection:s' => \$tracks,
           'xtrackmode:s' => \$xtrackmode,
	   'config=s' => \$config,
           'product=s' => \$productname,
	   'analysis=s' => \$project,
	   'test' => \$test,
	   'help|?' => \$help, man => \$man
    ) or pod2usage(2);

pod2usage(1) if $help;
pod2usage(-exitstatus => 0, -verbose => 2) if $man;

unless ($output) {
  invalidargs("no output file specified (option -o).\n");
}
unless ($config) {
  invalidargs("no config file specified (option -c).\n");
}
unless ($project) {
  invalidargs("no project specified (option -a).\n");
  exit(1);
}
unless($productname) {
  invalidargs("no product specified (option -p).\n");
  exit(1);
}
print $productname."\n";
my $product = $producttypes{$productname};
unless($product) {
  invalidargs("unknown producttype: ".$productname."\n");
  exit(1);
}
unless ($spectrum || $dateranges) {
  invalidargs("Please specify a spectrum to analyze, or a date.\n");
  exit(1);
}
if ($spectrum && $dateranges) {
  invalidargs("Specify either a single spectrum for analysis, or a range of dates for which all data should be analysed.");
}


my @days;
if($spectrum) {
    my ($year,$day,$spectrumfile);
    if ($spectrum =~ m/^(.*\/)?(\d{4})\/(\d{3})(\/[^\/]*)?$/) { # extract year and day from a path of the form (/path/to/spectra/)yyyy/ddd(/filename)
#	print("year: ${2}, day: ${3}\n");
	$year = $2;
	$day = $3;
	if (-d $spectrum) {
	    $spectrumfile = $spectrum . "/*";
	} elsif (-f $spectrum) {
	    $spectrumfile = $spectrum;
	} else {
	    print ("Error: $spectrum is not a valid directory or file.\n");
	    exit(1);
	}
    }
    push @days, $year."/".$day;
#    my $irradiance = getIrradiance($year."/".$day);
#    runQDOAS($spectrumfile,$irradiance);
} else {
    foreach my $range (split(/,/,$dateranges)) {
	my @dates = split(/-/,$range);
	if (@dates >2) {
	    print "error: invalid range ${range}. Specify two dates separated by a '-' .\n";
	    exit(1);
	}
	my($year1,$day1) = getDay($dates[0]);
	my($year2,$day2) = $dates[1] ? getDay($dates[1]) : ($year1,$day1);
	addDays(\@days, $year1, $day1, $year2, $day2);
    }
#    foreach my $day (@days) {
#	my $file = $basedir . "/" . $product . "/" . $day . "/*";
#	my $irradiance = getIrradiance($day);
#	runQDOAS($file,$irradiance);
#    }
}

foreach my $day (@days) {
    my $trackselection = "1-60"; # default: use all tracks
#    if ($tracks && $tracks eq "auto") {
#        $trackselection = getTrackSelection($day);
#    } elsif ($tracks) {
    if ($tracks) {
        $trackselection = $tracks; # use tracks specified at command line
    }
    my $file = $basedir . "/" . $product . "/" . $day . "/*";
    my $irradiance = getIrradiance($day);
    runQDOAS($file,$irradiance,$trackselection);
}

sub addDays {
    my $rdays = shift;
    my ($year1,$day1,$year2,$day2) = @_;
    if ($year1 eq $year2) {
	foreach my $day ($day1..$day2) {
	    push @$rdays, $year1."/".sprintf("%03d",$day);
	}
    } elsif ($year1 < $year2) { # for a range spanning multiple years: split into multiple ranges
	addDays($rdays,$year1,$day1,$year1,Day_of_Year($year1,12,31));
	addDays($rdays,$year1+1,1,$year2,$day2);
    } else {
	invalidargs("in a range of dates, years must be listed in chronological order.\n");
    }
}

sub getDay {
    my $string = shift;
    if($string =~ m/\d{1,2}\/\d{1,2}\/\d{4}/) { # a dd/mm/yyyy date
	my ($day,$month,$year) =split (/\//,$string);
	return ($year, Day_of_Year($year,$month,$day));
    } elsif ($string =~ m/\d{4}:\d{1,3}/) { # a day of the year specified as 'year:day'
	return split(/:/,$string);
    } else {
	invalidargs("not a valid date or range of dates.");
    }
}

sub getIrradiance {
    my $day = shift;
    my @spectra = glob $basedir . "/" . $irradiance . "/" . $day . "/*";
    # in case multiple irradiance spectra are available, we take the latest one:
    return $spectra[-1];
}

#sub getTrackSelection {
#    my $day = shift;
#    my $result = "";
#    my $i = 0;
#    while( $autoselectedtracks[$i]->[0] le $day && $i < @autoselectedtracks) {
#        $i++;
#    } 
#    $result = $i?
#        $autoselectedtracks[$i-1]->[1] : "0-59";
#    # TODO
#    return $result;
#}

sub runQDOAS {
    my $spectrumfile = shift;
    my $irradiance  = shift;
    my $trackselection = shift;
    unless($irradiance) {
      print("Error: no irradiance spectrum found for spectrum $spectrumfile.\n");
      return;
    }
    my @doasargs = ($doas_cl,
		    "-c", $config,
		    "-a", $project,
		    "-o", $output,
		    "-f", $spectrumfile,
		    "-xml", "/project/analysis_window/files/refone=".$irradiance,
                    "-xml", "/project/instrumental/omi/trackSelection=".$trackselection,
                    "-xml", "/project/instrumental/omi/xTrackMode=".$xtrackmode);
    push @doasargs, "-v" if($verbose);
    unless ($test) {
	system(@doasargs);
    } else {
	print "@doasargs\n";
    }
}

sub invalidargs {
  my $message = shift;
  print("Error: " . $message . "\n");
  pod2usage(2);
}


__END__

=head1 QDOAS

qdoas.pl

=head1 SYNOPSIS

qdoas.pl -o <output> -c <qdoas config file> -p <product type UG/UZ/VG/VZ> -a <project to analyze> <-s spectrum>|<-d (range of) date(s)> [options]

Options:

  -v                 Run doas_cl with -v switch

  -trackselection    Use only a subset of the detector rows

  -xtrackmode        Set handling of XTrackQualityFlags in OMI L1B files.

  -test              Print the doas_cl command without running it

  -help              Print help message

  -man               Print full description

=head1 OPTIONS

=over 8

=item B<-c <configfile>>

Qdoas configuration file to be used.

=item B<-o <outputfile>>

File where analysis results should be written.

=item B<-p <product type>>

Choose one of the L1B product types UG, UZ, VG or VZ.

=item B<-a <project to use>>

Name of the project defined in the configuration file which should be used to perform the analysis.

=item B<-trackselection <(range of) tracks(s)>>

Tells doas_cl to use a subset of the scanning rows in the analysis.  The value of this option should be a comma-separated list of ranges between 1 and 60.  All 60 rows are used when no value is specified on the command line or in the qdoas configuration file.

Example: -trackselection 0-10,25-27,45-59

=item B<-xtrackmode <IGNORE|STRICT|NONSTRICT>>

Set handling of XTrackQualityFlags.

=over 16

=item IGNORE

    Don't use XTrackQualityFlags.

=item STRICT
    
    Exclude all flagged spectra.

=item NONSTRICT

    Include pixels where the effect of the anomaly is small, or could be corrected

=back

=item B<-spectrum <path>>

Analyzes the spectrum specified by <path>. If <path> is a file, doas_cl will be called to analyze this single file.  If <path> is a directory, all spectra in this directory will be analyzed.  Spectra must be located in a directory structure of the form "/base/path/yyyy/n/filename", where yyyy is the year and n is the day in this year where the spectrum was taken.

=item B<-dates <(range of)date(s)>>

The argument to this option is a comma-separated list of days, or ranges of days.  Days can be specified as 'dd/mm/yyyy' or 'yyyy:n' format, where n is the number of the day in the year specified.  Ranges are specified as 'day1-day2'.

Example: -dates 01/07/2007-06/07/2007,10/07/2007

=item B<-v>

Runs doas_cl in verbose mode.

=item B<-test>

Prints the doas_cl commands without running them.

=item B<-help>

Prints a short help message and exits.

=item B<-man>

Prints the manual page and exits.

=back

=head1 DESCRIPTION

Batch-process spectra using doas_cl. Only a date or the path to a
spectrum needs to be specified. The correct irradiance spectrum is
retrieved based on the date.

=cut
