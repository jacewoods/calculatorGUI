/****************************************************************************
** Meta object code from reading C++ file 'CalcGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CalcGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalcGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CalcGUI_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalcGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalcGUI_t qt_meta_stringdata_CalcGUI = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CalcGUI"
QT_MOC_LITERAL(1, 8, 12), // "digitPressed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "Clear"
QT_MOC_LITERAL(4, 28, 15), // "operatorPressed"
QT_MOC_LITERAL(5, 44, 16) // "GUIequalsPressed"

    },
    "CalcGUI\0digitPressed\0\0Clear\0operatorPressed\0"
    "GUIequalsPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalcGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalcGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalcGUI *_t = static_cast<CalcGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->digitPressed(); break;
        case 1: _t->Clear(); break;
        case 2: _t->operatorPressed(); break;
        case 3: _t->GUIequalsPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CalcGUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CalcGUI.data,
      qt_meta_data_CalcGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CalcGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalcGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CalcGUI.stringdata0))
        return static_cast<void*>(const_cast< CalcGUI*>(this));
    return QDialog::qt_metacast(_clname);
}

int CalcGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
