/****************************************************************************
** Meta object code from reading C++ file 'CWPlotPropertiesConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWPlotPropertiesConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWPlotPropertiesConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWPlotPropertySample_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWPlotPropertySample_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWPlotPropertySample_t qt_meta_stringdata_CWPlotPropertySample = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CWPlotPropertySample"
QT_MOC_LITERAL(1, 21, 15), // "slotSetPenWidth"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8) // "penWidth"

    },
    "CWPlotPropertySample\0slotSetPenWidth\0"
    "\0penWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWPlotPropertySample[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CWPlotPropertySample::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWPlotPropertySample *_t = static_cast<CWPlotPropertySample *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSetPenWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWPlotPropertySample::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWPlotPropertySample.data,
      qt_meta_data_CWPlotPropertySample,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWPlotPropertySample::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWPlotPropertySample::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWPlotPropertySample.stringdata0))
        return static_cast<void*>(const_cast< CWPlotPropertySample*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWPlotPropertySample::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CWPlotPropertyScale_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWPlotPropertyScale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWPlotPropertyScale_t qt_meta_stringdata_CWPlotPropertyScale = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CWPlotPropertyScale"
QT_MOC_LITERAL(1, 20, 21), // "slotFixedCheckChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10) // "checkState"

    },
    "CWPlotPropertyScale\0slotFixedCheckChanged\0"
    "\0checkState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWPlotPropertyScale[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CWPlotPropertyScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWPlotPropertyScale *_t = static_cast<CWPlotPropertyScale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFixedCheckChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWPlotPropertyScale::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWPlotPropertyScale.data,
      qt_meta_data_CWPlotPropertyScale,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWPlotPropertyScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWPlotPropertyScale::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWPlotPropertyScale.stringdata0))
        return static_cast<void*>(const_cast< CWPlotPropertyScale*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWPlotPropertyScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CWPlotPropertiesConfig_t {
    QByteArrayData data[3];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWPlotPropertiesConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWPlotPropertiesConfig_t qt_meta_stringdata_CWPlotPropertiesConfig = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CWPlotPropertiesConfig"
QT_MOC_LITERAL(1, 23, 26), // "slotSelectBackgroundColour"
QT_MOC_LITERAL(2, 50, 0) // ""

    },
    "CWPlotPropertiesConfig\0"
    "slotSelectBackgroundColour\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWPlotPropertiesConfig[] = {

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

void CWPlotPropertiesConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWPlotPropertiesConfig *_t = static_cast<CWPlotPropertiesConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSelectBackgroundColour(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWPlotPropertiesConfig::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWPlotPropertiesConfig.data,
      qt_meta_data_CWPlotPropertiesConfig,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWPlotPropertiesConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWPlotPropertiesConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWPlotPropertiesConfig.stringdata0))
        return static_cast<void*>(const_cast< CWPlotPropertiesConfig*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWPlotPropertiesConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
