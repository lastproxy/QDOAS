/****************************************************************************
** Meta object code from reading C++ file 'CWActiveContext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWActiveContext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWActiveContext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWActiveContext_t {
    QByteArrayData data[18];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWActiveContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWActiveContext_t qt_meta_stringdata_CWActiveContext = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CWActiveContext"
QT_MOC_LITERAL(1, 16, 23), // "signalActivePageChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "pageNumber"
QT_MOC_LITERAL(4, 52, 19), // "slotOkButtonClicked"
QT_MOC_LITERAL(5, 72, 23), // "slotCancelButtonClicked"
QT_MOC_LITERAL(6, 96, 21), // "slotHelpButtonClicked"
QT_MOC_LITERAL(7, 118, 12), // "slotAcceptOk"
QT_MOC_LITERAL(8, 131, 7), // "canDoOk"
QT_MOC_LITERAL(9, 139, 13), // "slotPlotPages"
QT_MOC_LITERAL(10, 153, 39), // "QList<RefCountConstPtr<CPlotP..."
QT_MOC_LITERAL(11, 193, 8), // "pageList"
QT_MOC_LITERAL(12, 202, 26), // "slotCurrentGraphTabChanged"
QT_MOC_LITERAL(13, 229, 5), // "index"
QT_MOC_LITERAL(14, 235, 27), // "slotCurrentActiveTabChanged"
QT_MOC_LITERAL(15, 263, 22), // "slotEditPlotProperties"
QT_MOC_LITERAL(16, 286, 14), // "slotPrintPlots"
QT_MOC_LITERAL(17, 301, 15) // "slotExportPlots"

    },
    "CWActiveContext\0signalActivePageChanged\0"
    "\0pageNumber\0slotOkButtonClicked\0"
    "slotCancelButtonClicked\0slotHelpButtonClicked\0"
    "slotAcceptOk\0canDoOk\0slotPlotPages\0"
    "QList<RefCountConstPtr<CPlotPageData> >\0"
    "pageList\0slotCurrentGraphTabChanged\0"
    "index\0slotCurrentActiveTabChanged\0"
    "slotEditPlotProperties\0slotPrintPlots\0"
    "slotExportPlots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWActiveContext[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
      14,    1,   84,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,
      16,    0,   88,    2, 0x0a /* Public */,
      17,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CWActiveContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWActiveContext *_t = static_cast<CWActiveContext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalActivePageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotOkButtonClicked(); break;
        case 2: _t->slotCancelButtonClicked(); break;
        case 3: _t->slotHelpButtonClicked(); break;
        case 4: _t->slotAcceptOk((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotPlotPages((*reinterpret_cast< const QList<RefCountConstPtr<CPlotPageData> >(*)>(_a[1]))); break;
        case 6: _t->slotCurrentGraphTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotCurrentActiveTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotEditPlotProperties(); break;
        case 9: _t->slotPrintPlots(); break;
        case 10: _t->slotExportPlots(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CWActiveContext::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWActiveContext::signalActivePageChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CWActiveContext::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWActiveContext.data,
      qt_meta_data_CWActiveContext,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWActiveContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWActiveContext::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWActiveContext.stringdata0))
        return static_cast<void*>(const_cast< CWActiveContext*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWActiveContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CWActiveContext::signalActivePageChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
