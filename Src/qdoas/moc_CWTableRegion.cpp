/****************************************************************************
** Meta object code from reading C++ file 'CWTableRegion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWTableRegion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWTableRegion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWTableRegion_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWTableRegion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWTableRegion_t qt_meta_stringdata_CWTableRegion = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CWTableRegion"
QT_MOC_LITERAL(1, 14, 14), // "slotTablePages"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 40), // "QList<RefCountConstPtr<CTable..."
QT_MOC_LITERAL(4, 71, 8), // "pageList"
QT_MOC_LITERAL(5, 80, 15), // "slotDisplayPage"
QT_MOC_LITERAL(6, 96, 10), // "pageNumber"
QT_MOC_LITERAL(7, 107, 10) // "slotSaveAs"

    },
    "CWTableRegion\0slotTablePages\0\0"
    "QList<RefCountConstPtr<CTablePageData> >\0"
    "pageList\0slotDisplayPage\0pageNumber\0"
    "slotSaveAs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWTableRegion[] = {

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
       5,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void CWTableRegion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWTableRegion *_t = static_cast<CWTableRegion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTablePages((*reinterpret_cast< const QList<RefCountConstPtr<CTablePageData> >(*)>(_a[1]))); break;
        case 1: _t->slotDisplayPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotSaveAs(); break;
        default: ;
        }
    }
}

const QMetaObject CWTableRegion::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_CWTableRegion.data,
      qt_meta_data_CWTableRegion,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWTableRegion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWTableRegion::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWTableRegion.stringdata0))
        return static_cast<void*>(const_cast< CWTableRegion*>(this));
    return QTableView::qt_metacast(_clname);
}

int CWTableRegion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
