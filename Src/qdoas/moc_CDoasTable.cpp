/****************************************************************************
** Meta object code from reading C++ file 'CDoasTable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CDoasTable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CDoasTable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CDoasTable_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDoasTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDoasTable_t qt_meta_stringdata_CDoasTable = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CDoasTable"
QT_MOC_LITERAL(1, 11, 28), // "slotMovedHorizontalScrollBar"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 26) // "slotMovedVerticalScrollBar"

    },
    "CDoasTable\0slotMovedHorizontalScrollBar\0"
    "\0value\0slotMovedVerticalScrollBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDoasTable[] = {

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
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CDoasTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDoasTable *_t = static_cast<CDoasTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotMovedHorizontalScrollBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotMovedVerticalScrollBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CDoasTable::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CDoasTable.data,
      qt_meta_data_CDoasTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDoasTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDoasTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDoasTable.stringdata0))
        return static_cast<void*>(const_cast< CDoasTable*>(this));
    return QFrame::qt_metacast(_clname);
}

int CDoasTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CDoasTableColumn_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDoasTableColumn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDoasTableColumn_t qt_meta_stringdata_CDoasTableColumn = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CDoasTableColumn"
QT_MOC_LITERAL(1, 17, 19), // "slotCellDataChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "const QWidget*"
QT_MOC_LITERAL(4, 53, 3), // "src"
QT_MOC_LITERAL(5, 57, 8) // "cellData"

    },
    "CDoasTableColumn\0slotCellDataChanged\0"
    "\0const QWidget*\0src\0cellData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDoasTableColumn[] = {

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
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,

       0        // eod
};

void CDoasTableColumn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDoasTableColumn *_t = static_cast<CDoasTableColumn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotCellDataChanged((*reinterpret_cast< const QWidget*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject CDoasTableColumn::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CDoasTableColumn.data,
      qt_meta_data_CDoasTableColumn,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDoasTableColumn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDoasTableColumn::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDoasTableColumn.stringdata0))
        return static_cast<void*>(const_cast< CDoasTableColumn*>(this));
    return QObject::qt_metacast(_clname);
}

int CDoasTableColumn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CDoasTableColumnLineEdit_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDoasTableColumnLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDoasTableColumnLineEdit_t qt_meta_stringdata_CDoasTableColumnLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CDoasTableColumnLineEdit"
QT_MOC_LITERAL(1, 25, 17), // "signalTextChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "const QWidget*"
QT_MOC_LITERAL(4, 59, 3), // "src"
QT_MOC_LITERAL(5, 63, 8), // "cellData"
QT_MOC_LITERAL(6, 72, 15), // "slotTextChanged"
QT_MOC_LITERAL(7, 88, 7) // "newText"

    },
    "CDoasTableColumnLineEdit\0signalTextChanged\0"
    "\0const QWidget*\0src\0cellData\0"
    "slotTextChanged\0newText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDoasTableColumnLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void CDoasTableColumnLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDoasTableColumnLineEdit *_t = static_cast<CDoasTableColumnLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalTextChanged((*reinterpret_cast< const QWidget*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDoasTableColumnLineEdit::*_t)(const QWidget * , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDoasTableColumnLineEdit::signalTextChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CDoasTableColumnLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_CDoasTableColumnLineEdit.data,
      qt_meta_data_CDoasTableColumnLineEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDoasTableColumnLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDoasTableColumnLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDoasTableColumnLineEdit.stringdata0))
        return static_cast<void*>(const_cast< CDoasTableColumnLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int CDoasTableColumnLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CDoasTableColumnLineEdit::signalTextChanged(const QWidget * _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CDoasTableColumnComboBox_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDoasTableColumnComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDoasTableColumnComboBox_t qt_meta_stringdata_CDoasTableColumnComboBox = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CDoasTableColumnComboBox"
QT_MOC_LITERAL(1, 25, 17), // "signalTextChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "const QWidget*"
QT_MOC_LITERAL(4, 59, 3), // "src"
QT_MOC_LITERAL(5, 63, 8), // "cellData"
QT_MOC_LITERAL(6, 72, 15), // "slotTextChanged"
QT_MOC_LITERAL(7, 88, 7) // "newText"

    },
    "CDoasTableColumnComboBox\0signalTextChanged\0"
    "\0const QWidget*\0src\0cellData\0"
    "slotTextChanged\0newText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDoasTableColumnComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void CDoasTableColumnComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDoasTableColumnComboBox *_t = static_cast<CDoasTableColumnComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalTextChanged((*reinterpret_cast< const QWidget*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDoasTableColumnComboBox::*_t)(const QWidget * , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDoasTableColumnComboBox::signalTextChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CDoasTableColumnComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CDoasTableColumnComboBox.data,
      qt_meta_data_CDoasTableColumnComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDoasTableColumnComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDoasTableColumnComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDoasTableColumnComboBox.stringdata0))
        return static_cast<void*>(const_cast< CDoasTableColumnComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CDoasTableColumnComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CDoasTableColumnComboBox::signalTextChanged(const QWidget * _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CDoasTableColumnCheckBox_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDoasTableColumnCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDoasTableColumnCheckBox_t qt_meta_stringdata_CDoasTableColumnCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CDoasTableColumnCheckBox"
QT_MOC_LITERAL(1, 25, 18), // "signalStateChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "const QWidget*"
QT_MOC_LITERAL(4, 60, 3), // "src"
QT_MOC_LITERAL(5, 64, 8), // "cellData"
QT_MOC_LITERAL(6, 73, 16) // "slotStateChanged"

    },
    "CDoasTableColumnCheckBox\0signalStateChanged\0"
    "\0const QWidget*\0src\0cellData\0"
    "slotStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDoasTableColumnCheckBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void CDoasTableColumnCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDoasTableColumnCheckBox *_t = static_cast<CDoasTableColumnCheckBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalStateChanged((*reinterpret_cast< const QWidget*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->slotStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDoasTableColumnCheckBox::*_t)(const QWidget * , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDoasTableColumnCheckBox::signalStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CDoasTableColumnCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_CDoasTableColumnCheckBox.data,
      qt_meta_data_CDoasTableColumnCheckBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDoasTableColumnCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDoasTableColumnCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDoasTableColumnCheckBox.stringdata0))
        return static_cast<void*>(const_cast< CDoasTableColumnCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int CDoasTableColumnCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CDoasTableColumnCheckBox::signalStateChanged(const QWidget * _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
