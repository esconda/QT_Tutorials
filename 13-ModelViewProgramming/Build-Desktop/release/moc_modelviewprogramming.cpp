/****************************************************************************
** Meta object code from reading C++ file 'modelviewprogramming.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../modelviewprogramming.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelviewprogramming.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelViewProgramming_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelViewProgramming_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelViewProgramming_t qt_meta_stringdata_ModelViewProgramming = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ModelViewProgramming"
QT_MOC_LITERAL(1, 21, 14), // "on_Add_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "on_Insert_clicked"
QT_MOC_LITERAL(4, 55, 17), // "on_Delete_clicked"
QT_MOC_LITERAL(5, 73, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(6, 105, 5) // "index"

    },
    "ModelViewProgramming\0on_Add_clicked\0"
    "\0on_Insert_clicked\0on_Delete_clicked\0"
    "on_comboBox_currentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelViewProgramming[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void ModelViewProgramming::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelViewProgramming *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Add_clicked(); break;
        case 1: _t->on_Insert_clicked(); break;
        case 2: _t->on_Delete_clicked(); break;
        case 3: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelViewProgramming::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ModelViewProgramming.data,
    qt_meta_data_ModelViewProgramming,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModelViewProgramming::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelViewProgramming::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelViewProgramming.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ModelViewProgramming::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
