/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "searchScheduleButtonClicked",
    "",
    "addScheduleButtonClicked",
    "statisticsByEndStationButtonClicked",
    "statisticsByStartStationButtonClicked",
    "bookTicketButtonClicked",
    "cancelTicketButtonClicked",
    "rescheduleTicketButtonClicked",
    "clearSchedulesButtonClicked",
    "searchTicketsButtonClicked",
    "clearQueryFields",
    "clearTicketFields",
    "onaddScheduleButtonclicked",
    "registerButtonclicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'searchScheduleButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addScheduleButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statisticsByEndStationButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statisticsByStartStationButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bookTicketButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancelTicketButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rescheduleTicketButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSchedulesButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchTicketsButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearQueryFields'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearTicketFields'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onaddScheduleButtonclicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'registerButtonclicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchScheduleButtonClicked(); break;
        case 1: _t->addScheduleButtonClicked(); break;
        case 2: _t->statisticsByEndStationButtonClicked(); break;
        case 3: _t->statisticsByStartStationButtonClicked(); break;
        case 4: _t->bookTicketButtonClicked(); break;
        case 5: _t->cancelTicketButtonClicked(); break;
        case 6: _t->rescheduleTicketButtonClicked(); break;
        case 7: _t->clearSchedulesButtonClicked(); break;
        case 8: _t->searchTicketsButtonClicked(); break;
        case 9: _t->clearQueryFields(); break;
        case 10: _t->clearTicketFields(); break;
        case 11: _t->onaddScheduleButtonclicked(); break;
        case 12: _t->registerButtonclicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
