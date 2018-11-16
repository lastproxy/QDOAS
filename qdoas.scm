;; This file contains a Qdoas package description for use with the
;; Guix package manager (https://www.gnu.org/software/guix)
;;
;; If Guix is installed on your system, you can install Qdoas using
;;
;;   guix package --install-from-file=qdoas.scm
;;
;; To prepare an environment for working on the qdoas code, you can
;; use
;;
;;   guix environment --load=qdoas.scm
;;
(use-modules (guix)
             (guix gexp)
             (guix build-system gnu)
             ((guix licenses) #:prefix license:)
             (gnu packages compression)
             (gnu packages image)
             (gnu packages maths)
             (gnu packages qt))

(package
 (name "qdoas")
 (version "3.2")
 (source
  (local-file "./Src" #:recursive? #t))
 (build-system gnu-build-system)
 (inputs
  `(("qtbase" ,qtbase)
    ("qwt" ,qwt)
    ("zlib" ,zlib)
    ("jpeg" ,libjpeg)
    ("hdf4" ,hdf4-alt)
    ("hdf5" ,hdf5)
    ("hdf-eos2" ,hdf-eos2)
    ("hdf-eos5" ,hdf-eos5)
    ("coda" ,coda)
    ("netcdf" ,netcdf)
    ("gsl" ,gsl)))
 (arguments
  `(#:phases
    (modify-phases %standard-phases
                   (replace 'configure
                            (lambda* (#:key outputs #:allow-other-keys)
                              (let ((out (assoc-ref outputs "out")))
                                (system* "make" "-k" "-i" "distclean")
                                (system* "qmake" "all.pro"
                                         (string-append "INSTALL_PREFIX = " out))))))))
 (synopsis "QDOAS")
    (description "QDOAS.")
    (home-page "https://aeronomie.be")
    (license license:gpl2+))
