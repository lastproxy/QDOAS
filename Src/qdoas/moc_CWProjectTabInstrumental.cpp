/****************************************************************************
** Meta object code from reading C++ file 'CWProjectTabInstrumental.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWProjectTabInstrumental.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWProjectTabInstrumental.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWProjectTabInstrumental_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWProjectTabInstrumental_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWProjectTabInstrumental_t qt_meta_stringdata_CWProjectTabInstrumental = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CWProjectTabInstrumental"
QT_MOC_LITERAL(1, 25, 21), // "slotInstrumentChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 10), // "instrument"
QT_MOC_LITERAL(4, 59, 25), // "slotInstrumentTypeChanged"
QT_MOC_LITERAL(5, 85, 14) // "instrumentType"

    },
    "CWProjectTabInstrumental\0slotInstrumentChanged\0"
    "\0instrument\0slotInstrumentTypeChanged\0"
    "instrumentType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWProjectTabInstrumental[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void CWProjectTabInstrumental::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWProjectTabInstrumental *_t = static_cast<CWProjectTabInstrumental *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInstrumentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotInstrumentTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWProjectTabInstrumental::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWProjectTabInstrumental.data,
      qt_meta_data_CWProjectTabInstrumental,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWProjectTabInstrumental::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWProjectTabInstrumental::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWProjectTabInstrumental.stringdata0))
        return static_cast<void*>(const_cast< CWProjectTabInstrumental*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWProjectTabInstrumental::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_CWCalibInstrEdit_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWCalibInstrEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWCalibInstrEdit_t qt_meta_stringdata_CWCalibInstrEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CWCalibInstrEdit"
QT_MOC_LITERAL(1, 17, 18), // "slotCalibOneBrowse"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "slotInstrTwoBrowse"
QT_MOC_LITERAL(4, 56, 19) // "slotOffsetTwoBrowse"

    },
    "CWCalibInstrEdit\0slotCalibOneBrowse\0"
    "\0slotInstrTwoBrowse\0slotOffsetTwoBrowse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWCalibInstrEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CWCalibInstrEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWCalibInstrEdit *_t = static_cast<CWCalibInstrEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotCalibOneBrowse(); break;
        case 1: _t->slotInstrTwoBrowse(); break;
        case 2: _t->slotOffsetTwoBrowse(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWCalibInstrEdit::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWCalibInstrEdit.data,
      qt_meta_data_CWCalibInstrEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWCalibInstrEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWCalibInstrEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWCalibInstrEdit.stringdata0))
        return static_cast<void*>(const_cast< CWCalibInstrEdit*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWCalibInstrEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_StrayLightConfig_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StrayLightConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StrayLightConfig_t qt_meta_stringdata_StrayLightConfig = {
    {
QT_MOC_LITERAL(0, 0, 16) // "StrayLightConfig"

    },
    "StrayLightConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StrayLightConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StrayLightConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StrayLightConfig::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_StrayLightConfig.data,
      qt_meta_data_StrayLightConfig,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StrayLightConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StrayLightConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StrayLightConfig.stringdata0))
        return static_cast<void*>(const_cast< StrayLightConfig*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int StrayLightConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CWAllFilesEdit_t {
    QByteArrayData data[8];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWAllFilesEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWAllFilesEdit_t qt_meta_stringdata_CWAllFilesEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CWAllFilesEdit"
QT_MOC_LITERAL(1, 15, 36), // "slotInterPixelVariabilityThre..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 26), // "slotDarkCurrentThreeBrowse"
QT_MOC_LITERAL(4, 80, 35), // "slotStraylightCorrectionThree..."
QT_MOC_LITERAL(5, 116, 34), // "slotDetectorNonLinearityFourB..."
QT_MOC_LITERAL(6, 151, 20), // "slotOffsetFourBrowse"
QT_MOC_LITERAL(7, 172, 23) // "slotImagePathFiveBrowse"

    },
    "CWAllFilesEdit\0slotInterPixelVariabilityThreeBrowse\0"
    "\0slotDarkCurrentThreeBrowse\0"
    "slotStraylightCorrectionThreeBrowse\0"
    "slotDetectorNonLinearityFourBrowse\0"
    "slotOffsetFourBrowse\0slotImagePathFiveBrowse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWAllFilesEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CWAllFilesEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWAllFilesEdit *_t = static_cast<CWAllFilesEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInterPixelVariabilityThreeBrowse(); break;
        case 1: _t->slotDarkCurrentThreeBrowse(); break;
        case 2: _t->slotStraylightCorrectionThreeBrowse(); break;
        case 3: _t->slotDetectorNonLinearityFourBrowse(); break;
        case 4: _t->slotOffsetFourBrowse(); break;
        case 5: _t->slotImagePathFiveBrowse(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWAllFilesEdit::staticMetaObject = {
    { &CWCalibInstrEdit::staticMetaObject, qt_meta_stringdata_CWAllFilesEdit.data,
      qt_meta_data_CWAllFilesEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWAllFilesEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWAllFilesEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWAllFilesEdit.stringdata0))
        return static_cast<void*>(const_cast< CWAllFilesEdit*>(this));
    return CWCalibInstrEdit::qt_metacast(_clname);
}

int CWAllFilesEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWCalibInstrEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_CWInstrAsciiEdit_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWInstrAsciiEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWInstrAsciiEdit_t qt_meta_stringdata_CWInstrAsciiEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CWInstrAsciiEdit"
QT_MOC_LITERAL(1, 17, 22), // "slotAsciiFormatChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "state"
QT_MOC_LITERAL(4, 47, 30) // "slotAsciiExtendedFormatChanged"

    },
    "CWInstrAsciiEdit\0slotAsciiFormatChanged\0"
    "\0state\0slotAsciiExtendedFormatChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWInstrAsciiEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void CWInstrAsciiEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWInstrAsciiEdit *_t = static_cast<CWInstrAsciiEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotAsciiFormatChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotAsciiExtendedFormatChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWInstrAsciiEdit::staticMetaObject = {
    { &CWCalibInstrEdit::staticMetaObject, qt_meta_stringdata_CWInstrAsciiEdit.data,
      qt_meta_data_CWInstrAsciiEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWInstrAsciiEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWInstrAsciiEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWInstrAsciiEdit.stringdata0))
        return static_cast<void*>(const_cast< CWInstrAsciiEdit*>(this));
    return CWCalibInstrEdit::qt_metacast(_clname);
}

int CWInstrAsciiEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWCalibInstrEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_CWInstrSciaEdit_t {
    QByteArrayData data[11];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWInstrSciaEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWInstrSciaEdit_t qt_meta_stringdata_CWInstrSciaEdit = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CWInstrSciaEdit"
QT_MOC_LITERAL(1, 16, 18), // "slotChannelChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 19), // "slotCluster0Changed"
QT_MOC_LITERAL(5, 62, 5), // "state"
QT_MOC_LITERAL(6, 68, 19), // "slotCluster1Changed"
QT_MOC_LITERAL(7, 88, 19), // "slotCluster2Changed"
QT_MOC_LITERAL(8, 108, 19), // "slotCluster3Changed"
QT_MOC_LITERAL(9, 128, 19), // "slotCluster4Changed"
QT_MOC_LITERAL(10, 148, 19) // "slotCluster5Changed"

    },
    "CWInstrSciaEdit\0slotChannelChanged\0\0"
    "index\0slotCluster0Changed\0state\0"
    "slotCluster1Changed\0slotCluster2Changed\0"
    "slotCluster3Changed\0slotCluster4Changed\0"
    "slotCluster5Changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWInstrSciaEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void CWInstrSciaEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWInstrSciaEdit *_t = static_cast<CWInstrSciaEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotChannelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotCluster0Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotCluster1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotCluster2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotCluster3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotCluster4Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotCluster5Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWInstrSciaEdit::staticMetaObject = {
    { &CWAllFilesEdit::staticMetaObject, qt_meta_stringdata_CWInstrSciaEdit.data,
      qt_meta_data_CWInstrSciaEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWInstrSciaEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWInstrSciaEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWInstrSciaEdit.stringdata0))
        return static_cast<void*>(const_cast< CWInstrSciaEdit*>(this));
    return CWAllFilesEdit::qt_metacast(_clname);
}

int CWInstrSciaEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWAllFilesEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_CWInstrTropomiEdit_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWInstrTropomiEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWInstrTropomiEdit_t qt_meta_stringdata_CWInstrTropomiEdit = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CWInstrTropomiEdit"
QT_MOC_LITERAL(1, 19, 31), // "slot_browse_reference_directory"
QT_MOC_LITERAL(2, 51, 0) // ""

    },
    "CWInstrTropomiEdit\0slot_browse_reference_directory\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWInstrTropomiEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CWInstrTropomiEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWInstrTropomiEdit *_t = static_cast<CWInstrTropomiEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_browse_reference_directory(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWInstrTropomiEdit::staticMetaObject = {
    { &CWCalibInstrEdit::staticMetaObject, qt_meta_stringdata_CWInstrTropomiEdit.data,
      qt_meta_data_CWInstrTropomiEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWInstrTropomiEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWInstrTropomiEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWInstrTropomiEdit.stringdata0))
        return static_cast<void*>(const_cast< CWInstrTropomiEdit*>(this));
    return CWCalibInstrEdit::qt_metacast(_clname);
}

int CWInstrTropomiEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWCalibInstrEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
