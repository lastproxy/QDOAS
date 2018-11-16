/****************************************************************************
** Meta object code from reading C++ file 'CWPlotPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWPlotPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWPlotPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWPlot_t {
    QByteArrayData data[7];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWPlot_t qt_meta_stringdata_CWPlot = {
    {
QT_MOC_LITERAL(0, 0, 6), // "CWPlot"
QT_MOC_LITERAL(1, 7, 11), // "slotOverlay"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "slotSaveAs"
QT_MOC_LITERAL(4, 31, 9), // "slotPrint"
QT_MOC_LITERAL(5, 41, 17), // "slotExportAsImage"
QT_MOC_LITERAL(6, 59, 21) // "slotToggleInteraction"

    },
    "CWPlot\0slotOverlay\0\0slotSaveAs\0slotPrint\0"
    "slotExportAsImage\0slotToggleInteraction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWPlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CWPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWPlot *_t = static_cast<CWPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOverlay(); break;
        case 1: _t->slotSaveAs(); break;
        case 2: _t->slotPrint(); break;
        case 3: _t->slotExportAsImage(); break;
        case 4: _t->slotToggleInteraction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWPlot::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_CWPlot.data,
      qt_meta_data_CWPlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWPlot.stringdata0))
        return static_cast<void*>(const_cast< CWPlot*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int CWPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_CWPlotPage_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWPlotPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWPlotPage_t qt_meta_stringdata_CWPlotPage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CWPlotPage"
QT_MOC_LITERAL(1, 11, 17), // "slotPrintAllPlots"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25) // "slotExportAsImageAllPlots"

    },
    "CWPlotPage\0slotPrintAllPlots\0\0"
    "slotExportAsImageAllPlots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWPlotPage[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CWPlotPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWPlotPage *_t = static_cast<CWPlotPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotPrintAllPlots(); break;
        case 1: _t->slotExportAsImageAllPlots(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWPlotPage::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWPlotPage.data,
      qt_meta_data_CWPlotPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWPlotPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWPlotPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWPlotPage.stringdata0))
        return static_cast<void*>(const_cast< CWPlotPage*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWPlotPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
