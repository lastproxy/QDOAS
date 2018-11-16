/****************************************************************************
** Meta object code from reading C++ file 'CWSiteEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWSiteEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWSiteEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWSiteEditor_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWSiteEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWSiteEditor_t qt_meta_stringdata_CWSiteEditor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CWSiteEditor"
QT_MOC_LITERAL(1, 13, 20), // "slotLongitudeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "text"
QT_MOC_LITERAL(4, 40, 19), // "slotLatitudeChanged"
QT_MOC_LITERAL(5, 60, 19) // "slotAltitudeChanged"

    },
    "CWSiteEditor\0slotLongitudeChanged\0\0"
    "text\0slotLatitudeChanged\0slotAltitudeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWSiteEditor[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void CWSiteEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWSiteEditor *_t = static_cast<CWSiteEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotLongitudeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotLatitudeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotAltitudeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWSiteEditor::staticMetaObject = {
    { &CWEditor::staticMetaObject, qt_meta_stringdata_CWSiteEditor.data,
      qt_meta_data_CWSiteEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWSiteEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWSiteEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWSiteEditor.stringdata0))
        return static_cast<void*>(const_cast< CWSiteEditor*>(this));
    return CWEditor::qt_metacast(_clname);
}

int CWSiteEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWEditor::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
