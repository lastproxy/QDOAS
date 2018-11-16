/****************************************************************************
** Meta object code from reading C++ file 'CWProjectExportEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWProjectExportEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWProjectExportEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWProjectExportEditor_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWProjectExportEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWProjectExportEditor_t qt_meta_stringdata_CWProjectExportEditor = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CWProjectExportEditor"
QT_MOC_LITERAL(1, 22, 14), // "slotBrowsePath"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "slotDirectoryChanged"
QT_MOC_LITERAL(4, 59, 4), // "text"
QT_MOC_LITERAL(5, 64, 21), // "slotInstrumentChanged"
QT_MOC_LITERAL(6, 86, 10), // "instrument"
QT_MOC_LITERAL(7, 97, 17) // "slotReturnPressed"

    },
    "CWProjectExportEditor\0slotBrowsePath\0"
    "\0slotDirectoryChanged\0text\0"
    "slotInstrumentChanged\0instrument\0"
    "slotReturnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWProjectExportEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void CWProjectExportEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWProjectExportEditor *_t = static_cast<CWProjectExportEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBrowsePath(); break;
        case 1: _t->slotDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotInstrumentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotReturnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject CWProjectExportEditor::staticMetaObject = {
    { &CWEditor::staticMetaObject, qt_meta_stringdata_CWProjectExportEditor.data,
      qt_meta_data_CWProjectExportEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWProjectExportEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWProjectExportEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWProjectExportEditor.stringdata0))
        return static_cast<void*>(const_cast< CWProjectExportEditor*>(this));
    return CWEditor::qt_metacast(_clname);
}

int CWProjectExportEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
