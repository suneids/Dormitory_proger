/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Serega_random_Sunday/view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_View_t {
    const uint offsetsAndSize[32];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_View_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_View_t qt_meta_stringdata_View = {
    {
QT_MOC_LITERAL(0, 4), // "View"
QT_MOC_LITERAL(5, 9), // "SendToAdd"
QT_MOC_LITERAL(15, 0), // ""
QT_MOC_LITERAL(16, 12), // "SendToRemove"
QT_MOC_LITERAL(29, 20), // "SendCountsToValidate"
QT_MOC_LITERAL(50, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(68, 7), // "Refresh"
QT_MOC_LITERAL(76, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(96, 14), // "students_model"
QT_MOC_LITERAL(111, 23), // "students_uncursed_model"
QT_MOC_LITERAL(135, 23), // "students_by_roles_model"
QT_MOC_LITERAL(159, 11), // "ShowMessage"
QT_MOC_LITERAL(171, 7), // "message"
QT_MOC_LITERAL(179, 17), // "SendSelectedToAdd"
QT_MOC_LITERAL(197, 20), // "SendSelectedToRemove"
QT_MOC_LITERAL(218, 10) // "SendCounts"

    },
    "View\0SendToAdd\0\0SendToRemove\0"
    "SendCountsToValidate\0QMap<QString,int>\0"
    "Refresh\0QStandardItemModel*\0students_model\0"
    "students_uncursed_model\0students_by_roles_model\0"
    "ShowMessage\0message\0SendSelectedToAdd\0"
    "SendSelectedToRemove\0SendCounts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       3,    1,   65,    2, 0x06,    3 /* Public */,
       4,    2,   68,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    3,   73,    2, 0x0a,    8 /* Public */,
      11,    1,   80,    2, 0x0a,   12 /* Public */,
      13,    0,   83,    2, 0x0a,   14 /* Public */,
      14,    0,   84,    2, 0x0a,   15 /* Public */,
      15,    0,   85,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SendToAdd((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->SendToRemove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->SendCountsToValidate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,int>>>(_a[2]))); break;
        case 3: _t->Refresh((*reinterpret_cast< std::add_pointer_t<QStandardItemModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStandardItemModel*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStandardItemModel*>>(_a[3]))); break;
        case 4: _t->ShowMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->SendSelectedToAdd(); break;
        case 6: _t->SendSelectedToRemove(); break;
        case 7: _t->SendCounts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QStandardItemModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (View::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::SendToAdd)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (View::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::SendToRemove)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (View::*)(int , QMap<QString,int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::SendCountsToValidate)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject View::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_View.offsetsAndSize,
    qt_meta_data_View,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_View_t
, QtPrivate::TypeAndForceComplete<View, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,int>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStandardItemModel *, std::false_type>, QtPrivate::TypeAndForceComplete<QStandardItemModel *, std::false_type>, QtPrivate::TypeAndForceComplete<QStandardItemModel *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_View.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void View::SendToAdd(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void View::SendToRemove(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void View::SendCountsToValidate(int _t1, QMap<QString,int> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
