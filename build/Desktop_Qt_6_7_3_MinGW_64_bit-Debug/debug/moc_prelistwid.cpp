/****************************************************************************
** Meta object code from reading C++ file 'prelistwid.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../prelistwid.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prelistwid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPreListWidENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPreListWidENDCLASS = QtMocHelpers::stringData(
    "PreListWid",
    "SigUpSelectShow",
    "",
    "path",
    "SlotUpPreList",
    "QTreeWidgetItem*",
    "tree_item",
    "SlotUpSelect",
    "SlotItemPressed",
    "QListWidgetItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPreListWidENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   41,    2, 0x0a,    3 /* Public */,
       7,    1,   44,    2, 0x0a,    5 /* Public */,
       8,    1,   47,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject PreListWid::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPreListWidENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPreListWidENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPreListWidENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PreListWid, std::true_type>,
        // method 'SigUpSelectShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'SlotUpPreList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'SlotUpSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'SlotItemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void PreListWid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreListWid *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SigUpSelectShow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->SlotUpPreList((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 2: _t->SlotUpSelect((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 3: _t->SlotItemPressed((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreListWid::*)(QString );
            if (_t _q_method = &PreListWid::SigUpSelectShow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PreListWid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreListWid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPreListWidENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int PreListWid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PreListWid::SigUpSelectShow(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
