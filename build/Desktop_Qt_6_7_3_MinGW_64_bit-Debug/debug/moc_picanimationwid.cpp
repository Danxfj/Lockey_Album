/****************************************************************************
** Meta object code from reading C++ file 'picanimationwid.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../picanimationwid.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picanimationwid.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPicAnimationWidENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPicAnimationWidENDCLASS = QtMocHelpers::stringData(
    "PicAnimationWid",
    "SigUpPreList",
    "",
    "QTreeWidgetItem*",
    "SigSelectItem",
    "SigStart",
    "SigStop",
    "SigStartMusic",
    "SigStopMusic",
    "SlotUpSelectShow",
    "path",
    "SlotStartOrStop",
    "TimeOut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPicAnimationWidENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       5,    0,   74,    2, 0x06,    5 /* Public */,
       6,    0,   75,    2, 0x06,    6 /* Public */,
       7,    0,   76,    2, 0x06,    7 /* Public */,
       8,    0,   77,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   78,    2, 0x0a,    9 /* Public */,
      11,    0,   81,    2, 0x0a,   11 /* Public */,
      12,    0,   82,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PicAnimationWid::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPicAnimationWidENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPicAnimationWidENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPicAnimationWidENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PicAnimationWid, std::true_type>,
        // method 'SigUpPreList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'SigSelectItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'SigStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SigStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SigStartMusic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SigStopMusic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotUpSelectShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'SlotStartOrStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TimeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PicAnimationWid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PicAnimationWid *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SigUpPreList((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 1: _t->SigSelectItem((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 2: _t->SigStart(); break;
        case 3: _t->SigStop(); break;
        case 4: _t->SigStartMusic(); break;
        case 5: _t->SigStopMusic(); break;
        case 6: _t->SlotUpSelectShow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->SlotStartOrStop(); break;
        case 8: _t->TimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PicAnimationWid::*)(QTreeWidgetItem * );
            if (_t _q_method = &PicAnimationWid::SigUpPreList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PicAnimationWid::*)(QTreeWidgetItem * );
            if (_t _q_method = &PicAnimationWid::SigSelectItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PicAnimationWid::*)();
            if (_t _q_method = &PicAnimationWid::SigStart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PicAnimationWid::*)();
            if (_t _q_method = &PicAnimationWid::SigStop; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PicAnimationWid::*)();
            if (_t _q_method = &PicAnimationWid::SigStartMusic; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PicAnimationWid::*)();
            if (_t _q_method = &PicAnimationWid::SigStopMusic; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *PicAnimationWid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PicAnimationWid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPicAnimationWidENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PicAnimationWid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PicAnimationWid::SigUpPreList(QTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PicAnimationWid::SigSelectItem(QTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PicAnimationWid::SigStart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PicAnimationWid::SigStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PicAnimationWid::SigStartMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PicAnimationWid::SigStopMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
