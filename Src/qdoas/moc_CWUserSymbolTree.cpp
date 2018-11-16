/****************************************************************************
** Meta object code from reading C++ file 'CWUserSymbolTree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWUserSymbolTree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWUserSymbolTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWUserSymbolTree_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWUserSymbolTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWUserSymbolTree_t qt_meta_stringdata_CWUserSymbolTree = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CWUserSymbolTree"
QT_MOC_LITERAL(1, 17, 22), // "signalWidthModeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "newMode"
QT_MOC_LITERAL(4, 49, 16), // "slotAddNewSymbol"
QT_MOC_LITERAL(5, 66, 14), // "slotEditSymbol"
QT_MOC_LITERAL(6, 81, 16) // "slotDeleteSymbol"

    },
    "CWUserSymbolTree\0signalWidthModeChanged\0"
    "\0newMode\0slotAddNewSymbol\0slotEditSymbol\0"
    "slotDeleteSymbol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWUserSymbolTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CWUserSymbolTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWUserSymbolTree *_t = static_cast<CWUserSymbolTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalWidthModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotAddNewSymbol(); break;
        case 2: _t->slotEditSymbol(); break;
        case 3: _t->slotDeleteSymbol(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CWUserSymbolTree::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWUserSymbolTree::signalWidthModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CWUserSymbolTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_CWUserSymbolTree.data,
      qt_meta_data_CWUserSymbolTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWUserSymbolTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWUserSymbolTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWUserSymbolTree.stringdata0))
        return static_cast<void*>(const_cast< CWUserSymbolTree*>(this));
    if (!strcmp(_clname, "CSymbolObserver"))
        return static_cast< CSymbolObserver*>(const_cast< CWUserSymbolTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int CWUserSymbolTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CWUserSymbolTree::signalWidthModeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
