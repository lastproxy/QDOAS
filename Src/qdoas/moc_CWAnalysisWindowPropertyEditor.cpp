/****************************************************************************
** Meta object code from reading C++ file 'CWAnalysisWindowPropertyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWAnalysisWindowPropertyEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWAnalysisWindowPropertyEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWAnalysisWindowPropertyEditor_t {
    QByteArrayData data[11];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWAnalysisWindowPropertyEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWAnalysisWindowPropertyEditor_t qt_meta_stringdata_CWAnalysisWindowPropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 30), // "CWAnalysisWindowPropertyEditor"
QT_MOC_LITERAL(1, 31, 23), // "slotRefSelectionChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 7), // "checked"
QT_MOC_LITERAL(4, 64, 32), // "slotWavelengthCalibrationChanged"
QT_MOC_LITERAL(5, 97, 5), // "index"
QT_MOC_LITERAL(6, 103, 16), // "slotBrowseRefOne"
QT_MOC_LITERAL(7, 120, 16), // "slotBrowseRefTwo"
QT_MOC_LITERAL(8, 137, 18), // "slotBrowseResidual"
QT_MOC_LITERAL(9, 156, 27), // "slotMaxdoasSelectionChanged"
QT_MOC_LITERAL(10, 184, 15) // "slotPageChanged"

    },
    "CWAnalysisWindowPropertyEditor\0"
    "slotRefSelectionChanged\0\0checked\0"
    "slotWavelengthCalibrationChanged\0index\0"
    "slotBrowseRefOne\0slotBrowseRefTwo\0"
    "slotBrowseResidual\0slotMaxdoasSelectionChanged\0"
    "slotPageChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWAnalysisWindowPropertyEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void CWAnalysisWindowPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWAnalysisWindowPropertyEditor *_t = static_cast<CWAnalysisWindowPropertyEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotRefSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotWavelengthCalibrationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotBrowseRefOne(); break;
        case 3: _t->slotBrowseRefTwo(); break;
        case 4: _t->slotBrowseResidual(); break;
        case 5: _t->slotMaxdoasSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWAnalysisWindowPropertyEditor::staticMetaObject = {
    { &CWEditor::staticMetaObject, qt_meta_stringdata_CWAnalysisWindowPropertyEditor.data,
      qt_meta_data_CWAnalysisWindowPropertyEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWAnalysisWindowPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWAnalysisWindowPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWAnalysisWindowPropertyEditor.stringdata0))
        return static_cast<void*>(const_cast< CWAnalysisWindowPropertyEditor*>(this));
    if (!strcmp(_clname, "CProjectObserver"))
        return static_cast< CProjectObserver*>(const_cast< CWAnalysisWindowPropertyEditor*>(this));
    return CWEditor::qt_metacast(_clname);
}

int CWAnalysisWindowPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
