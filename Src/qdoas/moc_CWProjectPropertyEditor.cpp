/****************************************************************************
** Meta object code from reading C++ file 'CWProjectPropertyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWProjectPropertyEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWProjectPropertyEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWProjectPropertyEditor_t {
    QByteArrayData data[10];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWProjectPropertyEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWProjectPropertyEditor_t qt_meta_stringdata_CWProjectPropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CWProjectPropertyEditor"
QT_MOC_LITERAL(1, 24, 23), // "signalInstrumentChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 27), // "signalInstrumentTypeChanged"
QT_MOC_LITERAL(4, 77, 25), // "slotInstrumentTypeChanged"
QT_MOC_LITERAL(5, 103, 5), // "index"
QT_MOC_LITERAL(6, 109, 27), // "slotGroundInstrumentChanged"
QT_MOC_LITERAL(7, 137, 30), // "slotSatelliteInstrumentChanged"
QT_MOC_LITERAL(8, 168, 29), // "slotAirborneInstrumentChanged"
QT_MOC_LITERAL(9, 198, 15) // "slotPageChanged"

    },
    "CWProjectPropertyEditor\0signalInstrumentChanged\0"
    "\0signalInstrumentTypeChanged\0"
    "slotInstrumentTypeChanged\0index\0"
    "slotGroundInstrumentChanged\0"
    "slotSatelliteInstrumentChanged\0"
    "slotAirborneInstrumentChanged\0"
    "slotPageChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWProjectPropertyEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void CWProjectPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWProjectPropertyEditor *_t = static_cast<CWProjectPropertyEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalInstrumentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalInstrumentTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotInstrumentTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotGroundInstrumentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotSatelliteInstrumentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotAirborneInstrumentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CWProjectPropertyEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWProjectPropertyEditor::signalInstrumentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CWProjectPropertyEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWProjectPropertyEditor::signalInstrumentTypeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CWProjectPropertyEditor::staticMetaObject = {
    { &CWEditor::staticMetaObject, qt_meta_stringdata_CWProjectPropertyEditor.data,
      qt_meta_data_CWProjectPropertyEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWProjectPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWProjectPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWProjectPropertyEditor.stringdata0))
        return static_cast<void*>(const_cast< CWProjectPropertyEditor*>(this));
    return CWEditor::qt_metacast(_clname);
}

int CWProjectPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWEditor::qt_metacall(_c, _id, _a);
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
void CWProjectPropertyEditor::signalInstrumentChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CWProjectPropertyEditor::signalInstrumentTypeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
