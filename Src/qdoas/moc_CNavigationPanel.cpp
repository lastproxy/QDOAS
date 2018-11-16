/****************************************************************************
** Meta object code from reading C++ file 'CNavigationPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CNavigationPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CNavigationPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNavigationPanel_t {
    QByteArrayData data[34];
    char stringdata0[548];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNavigationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNavigationPanel_t qt_meta_stringdata_CNavigationPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CNavigationPanel"
QT_MOC_LITERAL(1, 17, 18), // "signalFirstClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "signalPreviousClicked"
QT_MOC_LITERAL(4, 59, 17), // "signalNextClicked"
QT_MOC_LITERAL(5, 77, 17), // "signalLastClicked"
QT_MOC_LITERAL(6, 95, 17), // "signalStopClicked"
QT_MOC_LITERAL(7, 113, 10), // "signalStep"
QT_MOC_LITERAL(8, 124, 19), // "signalRecordChanged"
QT_MOC_LITERAL(9, 144, 25), // "signalSelectedFileChanged"
QT_MOC_LITERAL(10, 170, 23), // "signalPlayStatusChanged"
QT_MOC_LITERAL(11, 194, 15), // "slotSetFileList"
QT_MOC_LITERAL(12, 210, 8), // "fileList"
QT_MOC_LITERAL(13, 219, 18), // "slotSetCurrentFile"
QT_MOC_LITERAL(14, 238, 9), // "fileIndex"
QT_MOC_LITERAL(15, 248, 8), // "nRecords"
QT_MOC_LITERAL(16, 257, 20), // "slotSetCurrentRecord"
QT_MOC_LITERAL(17, 278, 6), // "record"
QT_MOC_LITERAL(18, 285, 15), // "firstMiddleLast"
QT_MOC_LITERAL(19, 301, 14), // "slotSetEnabled"
QT_MOC_LITERAL(20, 316, 7), // "enabled"
QT_MOC_LITERAL(21, 324, 16), // "slotFirstClicked"
QT_MOC_LITERAL(22, 341, 19), // "slotPreviousClicked"
QT_MOC_LITERAL(23, 361, 15), // "slotNextClicked"
QT_MOC_LITERAL(24, 377, 15), // "slotLastClicked"
QT_MOC_LITERAL(25, 393, 15), // "slotStopClicked"
QT_MOC_LITERAL(26, 409, 21), // "slotRecordEditChanged"
QT_MOC_LITERAL(27, 431, 20), // "slotRecordTextEdited"
QT_MOC_LITERAL(28, 452, 4), // "text"
QT_MOC_LITERAL(29, 457, 20), // "slotDelayEditChanged"
QT_MOC_LITERAL(30, 478, 19), // "slotDelayTextEdited"
QT_MOC_LITERAL(31, 498, 16), // "slotFileSelected"
QT_MOC_LITERAL(32, 515, 20), // "slotPlayPauseClicked"
QT_MOC_LITERAL(33, 536, 11) // "slotTimeout"

    },
    "CNavigationPanel\0signalFirstClicked\0"
    "\0signalPreviousClicked\0signalNextClicked\0"
    "signalLastClicked\0signalStopClicked\0"
    "signalStep\0signalRecordChanged\0"
    "signalSelectedFileChanged\0"
    "signalPlayStatusChanged\0slotSetFileList\0"
    "fileList\0slotSetCurrentFile\0fileIndex\0"
    "nRecords\0slotSetCurrentRecord\0record\0"
    "firstMiddleLast\0slotSetEnabled\0enabled\0"
    "slotFirstClicked\0slotPreviousClicked\0"
    "slotNextClicked\0slotLastClicked\0"
    "slotStopClicked\0slotRecordEditChanged\0"
    "slotRecordTextEdited\0text\0"
    "slotDelayEditChanged\0slotDelayTextEdited\0"
    "slotFileSelected\0slotPlayPauseClicked\0"
    "slotTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNavigationPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x06 /* Public */,
       3,    0,  140,    2, 0x06 /* Public */,
       4,    0,  141,    2, 0x06 /* Public */,
       5,    0,  142,    2, 0x06 /* Public */,
       6,    0,  143,    2, 0x06 /* Public */,
       7,    0,  144,    2, 0x06 /* Public */,
       8,    1,  145,    2, 0x06 /* Public */,
       9,    1,  148,    2, 0x06 /* Public */,
      10,    1,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  154,    2, 0x0a /* Public */,
      13,    2,  157,    2, 0x0a /* Public */,
      16,    2,  162,    2, 0x0a /* Public */,
      19,    1,  167,    2, 0x0a /* Public */,
      21,    0,  170,    2, 0x08 /* Private */,
      22,    0,  171,    2, 0x08 /* Private */,
      23,    0,  172,    2, 0x08 /* Private */,
      24,    0,  173,    2, 0x08 /* Private */,
      25,    0,  174,    2, 0x08 /* Private */,
      26,    0,  175,    2, 0x08 /* Private */,
      27,    1,  176,    2, 0x08 /* Private */,
      29,    0,  179,    2, 0x08 /* Private */,
      30,    1,  180,    2, 0x08 /* Private */,
      31,    1,  183,    2, 0x08 /* Private */,
      32,    0,  186,    2, 0x08 /* Private */,
      33,    0,  187,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CNavigationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CNavigationPanel *_t = static_cast<CNavigationPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalFirstClicked(); break;
        case 1: _t->signalPreviousClicked(); break;
        case 2: _t->signalNextClicked(); break;
        case 3: _t->signalLastClicked(); break;
        case 4: _t->signalStopClicked(); break;
        case 5: _t->signalStep(); break;
        case 6: _t->signalRecordChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->signalSelectedFileChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->signalPlayStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotSetFileList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 10: _t->slotSetCurrentFile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->slotSetCurrentRecord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->slotSetEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->slotFirstClicked(); break;
        case 14: _t->slotPreviousClicked(); break;
        case 15: _t->slotNextClicked(); break;
        case 16: _t->slotLastClicked(); break;
        case 17: _t->slotStopClicked(); break;
        case 18: _t->slotRecordEditChanged(); break;
        case 19: _t->slotRecordTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->slotDelayEditChanged(); break;
        case 21: _t->slotDelayTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->slotFileSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->slotPlayPauseClicked(); break;
        case 24: _t->slotTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CNavigationPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalFirstClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalPreviousClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalNextClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalLastClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalStopClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalStep)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalRecordChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalSelectedFileChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CNavigationPanel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNavigationPanel::signalPlayStatusChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject CNavigationPanel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CNavigationPanel.data,
      qt_meta_data_CNavigationPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CNavigationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNavigationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CNavigationPanel.stringdata0))
        return static_cast<void*>(const_cast< CNavigationPanel*>(this));
    return QObject::qt_metacast(_clname);
}

int CNavigationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void CNavigationPanel::signalFirstClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CNavigationPanel::signalPreviousClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CNavigationPanel::signalNextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void CNavigationPanel::signalLastClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CNavigationPanel::signalStopClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void CNavigationPanel::signalStep()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void CNavigationPanel::signalRecordChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CNavigationPanel::signalSelectedFileChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CNavigationPanel::signalPlayStatusChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
