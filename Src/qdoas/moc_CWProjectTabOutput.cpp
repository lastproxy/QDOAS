/****************************************************************************
** Meta object code from reading C++ file 'CWProjectTabOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWProjectTabOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWProjectTabOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWProjectTabOutput_t {
    QByteArrayData data[13];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWProjectTabOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWProjectTabOutput_t qt_meta_stringdata_CWProjectTabOutput = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CWProjectTabOutput"
QT_MOC_LITERAL(1, 19, 23), // "signalOutputCalibration"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "enabled"
QT_MOC_LITERAL(4, 52, 14), // "slotBrowsePath"
QT_MOC_LITERAL(5, 67, 21), // "slotInstrumentChanged"
QT_MOC_LITERAL(6, 89, 10), // "instrument"
QT_MOC_LITERAL(7, 100, 24), // "slotAnalysisCheckChanged"
QT_MOC_LITERAL(8, 125, 5), // "state"
QT_MOC_LITERAL(9, 131, 27), // "slotCalibrationCheckChanged"
QT_MOC_LITERAL(10, 159, 25), // "slotReferenceCheckChanged"
QT_MOC_LITERAL(11, 185, 27), // "slotSelectFileFormatChanged"
QT_MOC_LITERAL(12, 213, 5) // "index"

    },
    "CWProjectTabOutput\0signalOutputCalibration\0"
    "\0enabled\0slotBrowsePath\0slotInstrumentChanged\0"
    "instrument\0slotAnalysisCheckChanged\0"
    "state\0slotCalibrationCheckChanged\0"
    "slotReferenceCheckChanged\0"
    "slotSelectFileFormatChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWProjectTabOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void CWProjectTabOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWProjectTabOutput *_t = static_cast<CWProjectTabOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOutputCalibration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotBrowsePath(); break;
        case 2: _t->slotInstrumentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotAnalysisCheckChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotCalibrationCheckChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotReferenceCheckChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotSelectFileFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CWProjectTabOutput::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWProjectTabOutput::signalOutputCalibration)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CWProjectTabOutput::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWProjectTabOutput.data,
      qt_meta_data_CWProjectTabOutput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWProjectTabOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWProjectTabOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWProjectTabOutput.stringdata0))
        return static_cast<void*>(const_cast< CWProjectTabOutput*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWProjectTabOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CWProjectTabOutput::signalOutputCalibration(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
