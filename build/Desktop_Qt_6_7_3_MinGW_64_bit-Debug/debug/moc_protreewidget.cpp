/****************************************************************************
** Meta object code from reading C++ file 'protreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../protreewidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protreewidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSProTreeWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSProTreeWidgetENDCLASS = QtMocHelpers::stringData(
    "ProTreeWidget",
    "SigCancelProgress",
    "",
    "SigCancelOpenProgress",
    "SlotItemPressed",
    "QTreeWidgetItem*",
    "pressedItem",
    "column",
    "Slotimport",
    "SlotClosePro",
    "SlotUpdateProgress",
    "count",
    "SlotFinishProgress",
    "SlotCancelProgress",
    "SlotSetActive",
    "SlotUpdateOpenProgress",
    "SlotFinishOpenProgress",
    "SlotCancelOpenProgress",
    "SlotOpenPro",
    "path"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProTreeWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    0,   93,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   94,    2, 0x08,    3 /* Private */,
       8,    0,   99,    2, 0x08,    6 /* Private */,
       9,    0,  100,    2, 0x08,    7 /* Private */,
      10,    1,  101,    2, 0x08,    8 /* Private */,
      12,    0,  104,    2, 0x08,   10 /* Private */,
      13,    0,  105,    2, 0x08,   11 /* Private */,
      14,    0,  106,    2, 0x08,   12 /* Private */,
      15,    1,  107,    2, 0x08,   13 /* Private */,
      16,    0,  110,    2, 0x08,   15 /* Private */,
      17,    0,  111,    2, 0x08,   16 /* Private */,
      18,    1,  112,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSProTreeWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProTreeWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProTreeWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProTreeWidget, std::true_type>,
        // method 'SigCancelProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SigCancelOpenProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotItemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'Slotimport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotClosePro'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SlotFinishProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotCancelProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotSetActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotUpdateOpenProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SlotFinishOpenProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotCancelOpenProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotOpenPro'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void ProTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SigCancelProgress(); break;
        case 1: _t->SigCancelOpenProgress(); break;
        case 2: _t->SlotItemPressed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->Slotimport(); break;
        case 4: _t->SlotClosePro(); break;
        case 5: _t->SlotUpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->SlotFinishProgress(); break;
        case 7: _t->SlotCancelProgress(); break;
        case 8: _t->SlotSetActive(); break;
        case 9: _t->SlotUpdateOpenProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->SlotFinishOpenProgress(); break;
        case 11: _t->SlotCancelOpenProgress(); break;
        case 12: _t->SlotOpenPro((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProTreeWidget::*)();
            if (_t _q_method = &ProTreeWidget::SigCancelProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProTreeWidget::*)();
            if (_t _q_method = &ProTreeWidget::SigCancelOpenProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ProTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProTreeWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int ProTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ProTreeWidget::SigCancelProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProTreeWidget::SigCancelOpenProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
