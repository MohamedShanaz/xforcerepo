/****************************************************************************
** Meta object code from reading C++ file 'scientificcalc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calculator/Calculator/scientificcalc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scientificcalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScientificCalc_t {
    QByteArrayData data[12];
    char stringdata[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScientificCalc_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScientificCalc_t qt_meta_stringdata_ScientificCalc = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScientificCalc"
QT_MOC_LITERAL(1, 15, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(4, 65, 24), // "on_pushButton_18_clicked"
QT_MOC_LITERAL(5, 90, 24), // "on_pushButton_20_clicked"
QT_MOC_LITERAL(6, 115, 24), // "on_pushButton_23_clicked"
QT_MOC_LITERAL(7, 140, 24), // "on_pushButton_24_clicked"
QT_MOC_LITERAL(8, 165, 24), // "on_pushButton_15_clicked"
QT_MOC_LITERAL(9, 190, 24), // "on_pushButton_19_clicked"
QT_MOC_LITERAL(10, 215, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(11, 240, 24) // "on_pushButton_14_clicked"

    },
    "ScientificCalc\0on_pushButton_7_clicked\0"
    "\0on_pushButton_10_clicked\0"
    "on_pushButton_18_clicked\0"
    "on_pushButton_20_clicked\0"
    "on_pushButton_23_clicked\0"
    "on_pushButton_24_clicked\0"
    "on_pushButton_15_clicked\0"
    "on_pushButton_19_clicked\0"
    "on_pushButton_13_clicked\0"
    "on_pushButton_14_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScientificCalc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void ScientificCalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScientificCalc *_t = static_cast<ScientificCalc *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_7_clicked(); break;
        case 1: _t->on_pushButton_10_clicked(); break;
        case 2: _t->on_pushButton_18_clicked(); break;
        case 3: _t->on_pushButton_20_clicked(); break;
        case 4: _t->on_pushButton_23_clicked(); break;
        case 5: _t->on_pushButton_24_clicked(); break;
        case 6: _t->on_pushButton_15_clicked(); break;
        case 7: _t->on_pushButton_19_clicked(); break;
        case 8: _t->on_pushButton_13_clicked(); break;
        case 9: _t->on_pushButton_14_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ScientificCalc::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ScientificCalc.data,
      qt_meta_data_ScientificCalc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScientificCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScientificCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScientificCalc.stringdata))
        return static_cast<void*>(const_cast< ScientificCalc*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ScientificCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
