/****************************************************************************
** Meta object code from reading C++ file 'CWSymbolEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWSymbolEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWSymbolEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWSymbolEditor_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWSymbolEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWSymbolEditor_t qt_meta_stringdata_CWSymbolEditor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CWSymbolEditor"
QT_MOC_LITERAL(1, 15, 15), // "slotNameChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "text"
QT_MOC_LITERAL(4, 37, 17) // "slotReturnPressed"

    },
    "CWSymbolEditor\0slotNameChanged\0\0text\0"
    "slotReturnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWSymbolEditor[] = {

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
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void CWSymbolEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWSymbolEditor *_t = static_cast<CWSymbolEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotReturnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject CWSymbolEditor::staticMetaObject = {
    { &CWEditor::staticMetaObject, qt_meta_stringdata_CWSymbolEditor.data,
      qt_meta_data_CWSymbolEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWSymbolEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWSymbolEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWSymbolEditor.stringdata0))
        return static_cast<void*>(const_cast< CWSymbolEditor*>(this));
    return CWEditor::qt_metacast(_clname);
}

int CWSymbolEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWEditor::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
