/****************************************************************************
** Meta object code from reading C++ file 'CWAnalysisWindowDoasTables.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWAnalysisWindowDoasTables.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWAnalysisWindowDoasTables.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWMoleculesDiffOrthoCombo_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWMoleculesDiffOrthoCombo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWMoleculesDiffOrthoCombo_t qt_meta_stringdata_CWMoleculesDiffOrthoCombo = {
    {
QT_MOC_LITERAL(0, 0, 25), // "CWMoleculesDiffOrthoCombo"
QT_MOC_LITERAL(1, 26, 21), // "slotSymbolListChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 7) // "symbols"

    },
    "CWMoleculesDiffOrthoCombo\0"
    "slotSymbolListChanged\0\0symbols"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWMoleculesDiffOrthoCombo[] = {

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
    QMetaType::Void, QMetaType::QStringList,    3,

       0        // eod
};

void CWMoleculesDiffOrthoCombo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWMoleculesDiffOrthoCombo *_t = static_cast<CWMoleculesDiffOrthoCombo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSymbolListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWMoleculesDiffOrthoCombo::staticMetaObject = {
    { &CDoasTableColumnComboBox::staticMetaObject, qt_meta_stringdata_CWMoleculesDiffOrthoCombo.data,
      qt_meta_data_CWMoleculesDiffOrthoCombo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWMoleculesDiffOrthoCombo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWMoleculesDiffOrthoCombo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWMoleculesDiffOrthoCombo.stringdata0))
        return static_cast<void*>(const_cast< CWMoleculesDiffOrthoCombo*>(this));
    return CDoasTableColumnComboBox::qt_metacast(_clname);
}

int CWMoleculesDiffOrthoCombo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CDoasTableColumnComboBox::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CWMoleculesDoasTable_t {
    QByteArrayData data[15];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWMoleculesDoasTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWMoleculesDoasTable_t qt_meta_stringdata_CWMoleculesDoasTable = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CWMoleculesDoasTable"
QT_MOC_LITERAL(1, 21, 23), // "signalSymbolListChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "symbols"
QT_MOC_LITERAL(4, 54, 14), // "slotLockSymbol"
QT_MOC_LITERAL(5, 69, 6), // "symbol"
QT_MOC_LITERAL(6, 76, 14), // "const QObject*"
QT_MOC_LITERAL(7, 91, 6), // "holder"
QT_MOC_LITERAL(8, 98, 16), // "slotUnlockSymbol"
QT_MOC_LITERAL(9, 115, 13), // "slotInsertRow"
QT_MOC_LITERAL(10, 129, 13), // "slotRemoveRow"
QT_MOC_LITERAL(11, 143, 30), // "slotChangeCrossSectionFileName"
QT_MOC_LITERAL(12, 174, 15), // "slotAmfFileName"
QT_MOC_LITERAL(13, 190, 22), // "slotFitColumnCheckable"
QT_MOC_LITERAL(14, 213, 5) // "state"

    },
    "CWMoleculesDoasTable\0signalSymbolListChanged\0"
    "\0symbols\0slotLockSymbol\0symbol\0"
    "const QObject*\0holder\0slotUnlockSymbol\0"
    "slotInsertRow\0slotRemoveRow\0"
    "slotChangeCrossSectionFileName\0"
    "slotAmfFileName\0slotFitColumnCheckable\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWMoleculesDoasTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   57,    2, 0x0a /* Public */,
       8,    2,   62,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void CWMoleculesDoasTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWMoleculesDoasTable *_t = static_cast<CWMoleculesDoasTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSymbolListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->slotLockSymbol((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2]))); break;
        case 2: _t->slotUnlockSymbol((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2]))); break;
        case 3: _t->slotInsertRow(); break;
        case 4: _t->slotRemoveRow(); break;
        case 5: _t->slotChangeCrossSectionFileName(); break;
        case 6: _t->slotAmfFileName(); break;
        case 7: _t->slotFitColumnCheckable((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CWMoleculesDoasTable::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWMoleculesDoasTable::signalSymbolListChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CWMoleculesDoasTable::staticMetaObject = {
    { &CDoasTable::staticMetaObject, qt_meta_stringdata_CWMoleculesDoasTable.data,
      qt_meta_data_CWMoleculesDoasTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWMoleculesDoasTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWMoleculesDoasTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWMoleculesDoasTable.stringdata0))
        return static_cast<void*>(const_cast< CWMoleculesDoasTable*>(this));
    return CDoasTable::qt_metacast(_clname);
}

int CWMoleculesDoasTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CDoasTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CWMoleculesDoasTable::signalSymbolListChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CWNonLinearParametersDoasTable_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWNonLinearParametersDoasTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWNonLinearParametersDoasTable_t qt_meta_stringdata_CWNonLinearParametersDoasTable = {
    {
QT_MOC_LITERAL(0, 0, 30), // "CWNonLinearParametersDoasTable"
QT_MOC_LITERAL(1, 31, 14), // "slotSelectFile"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "CWNonLinearParametersDoasTable\0"
    "slotSelectFile\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWNonLinearParametersDoasTable[] = {

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

void CWNonLinearParametersDoasTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWNonLinearParametersDoasTable *_t = static_cast<CWNonLinearParametersDoasTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSelectFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWNonLinearParametersDoasTable::staticMetaObject = {
    { &CDoasTable::staticMetaObject, qt_meta_stringdata_CWNonLinearParametersDoasTable.data,
      qt_meta_data_CWNonLinearParametersDoasTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWNonLinearParametersDoasTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWNonLinearParametersDoasTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWNonLinearParametersDoasTable.stringdata0))
        return static_cast<void*>(const_cast< CWNonLinearParametersDoasTable*>(this));
    return CDoasTable::qt_metacast(_clname);
}

int CWNonLinearParametersDoasTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CDoasTable::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CWShiftAndStretchDoasTable_t {
    QByteArrayData data[12];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWShiftAndStretchDoasTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWShiftAndStretchDoasTable_t qt_meta_stringdata_CWShiftAndStretchDoasTable = {
    {
QT_MOC_LITERAL(0, 0, 26), // "CWShiftAndStretchDoasTable"
QT_MOC_LITERAL(1, 27, 16), // "signalLockSymbol"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "symbol"
QT_MOC_LITERAL(4, 52, 14), // "const QObject*"
QT_MOC_LITERAL(5, 67, 6), // "holder"
QT_MOC_LITERAL(6, 74, 18), // "signalUnlockSymbol"
QT_MOC_LITERAL(7, 93, 21), // "slotSymbolListChanged"
QT_MOC_LITERAL(8, 115, 7), // "symbols"
QT_MOC_LITERAL(9, 123, 13), // "slotInsertRow"
QT_MOC_LITERAL(10, 137, 13), // "slotRemoveRow"
QT_MOC_LITERAL(11, 151, 13) // "slotModifyRow"

    },
    "CWShiftAndStretchDoasTable\0signalLockSymbol\0"
    "\0symbol\0const QObject*\0holder\0"
    "signalUnlockSymbol\0slotSymbolListChanged\0"
    "symbols\0slotInsertRow\0slotRemoveRow\0"
    "slotModifyRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWShiftAndStretchDoasTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CWShiftAndStretchDoasTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWShiftAndStretchDoasTable *_t = static_cast<CWShiftAndStretchDoasTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalLockSymbol((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2]))); break;
        case 1: _t->signalUnlockSymbol((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2]))); break;
        case 2: _t->slotSymbolListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->slotInsertRow(); break;
        case 4: _t->slotRemoveRow(); break;
        case 5: _t->slotModifyRow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CWShiftAndStretchDoasTable::*_t)(const QString & , const QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWShiftAndStretchDoasTable::signalLockSymbol)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CWShiftAndStretchDoasTable::*_t)(const QString & , const QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CWShiftAndStretchDoasTable::signalUnlockSymbol)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CWShiftAndStretchDoasTable::staticMetaObject = {
    { &CDoasTable::staticMetaObject, qt_meta_stringdata_CWShiftAndStretchDoasTable.data,
      qt_meta_data_CWShiftAndStretchDoasTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWShiftAndStretchDoasTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWShiftAndStretchDoasTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWShiftAndStretchDoasTable.stringdata0))
        return static_cast<void*>(const_cast< CWShiftAndStretchDoasTable*>(this));
    return CDoasTable::qt_metacast(_clname);
}

int CWShiftAndStretchDoasTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CDoasTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CWShiftAndStretchDoasTable::signalLockSymbol(const QString & _t1, const QObject * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CWShiftAndStretchDoasTable::signalUnlockSymbol(const QString & _t1, const QObject * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_CWGapDoasTable_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWGapDoasTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWGapDoasTable_t qt_meta_stringdata_CWGapDoasTable = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CWGapDoasTable"
QT_MOC_LITERAL(1, 15, 13), // "slotInsertRow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13) // "slotRemoveRow"

    },
    "CWGapDoasTable\0slotInsertRow\0\0"
    "slotRemoveRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWGapDoasTable[] = {

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

void CWGapDoasTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWGapDoasTable *_t = static_cast<CWGapDoasTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInsertRow(); break;
        case 1: _t->slotRemoveRow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CWGapDoasTable::staticMetaObject = {
    { &CDoasTable::staticMetaObject, qt_meta_stringdata_CWGapDoasTable.data,
      qt_meta_data_CWGapDoasTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWGapDoasTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWGapDoasTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWGapDoasTable.stringdata0))
        return static_cast<void*>(const_cast< CWGapDoasTable*>(this));
    return CDoasTable::qt_metacast(_clname);
}

int CWGapDoasTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CDoasTable::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CWOutputDoasTable_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWOutputDoasTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWOutputDoasTable_t qt_meta_stringdata_CWOutputDoasTable = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CWOutputDoasTable"
QT_MOC_LITERAL(1, 18, 21), // "slotSymbolListChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7) // "symbols"

    },
    "CWOutputDoasTable\0slotSymbolListChanged\0"
    "\0symbols"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWOutputDoasTable[] = {

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
    QMetaType::Void, QMetaType::QStringList,    3,

       0        // eod
};

void CWOutputDoasTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWOutputDoasTable *_t = static_cast<CWOutputDoasTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSymbolListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWOutputDoasTable::staticMetaObject = {
    { &CDoasTable::staticMetaObject, qt_meta_stringdata_CWOutputDoasTable.data,
      qt_meta_data_CWOutputDoasTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWOutputDoasTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWOutputDoasTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWOutputDoasTable.stringdata0))
        return static_cast<void*>(const_cast< CWOutputDoasTable*>(this));
    return CDoasTable::qt_metacast(_clname);
}

int CWOutputDoasTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CDoasTable::qt_metacall(_c, _id, _a);
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
