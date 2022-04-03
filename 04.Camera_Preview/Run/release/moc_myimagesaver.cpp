/****************************************************************************
** Meta object code from reading C++ file 'myimagesaver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myimagesaver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myimagesaver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyImageSaver_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyImageSaver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyImageSaver_t qt_meta_stringdata_MyImageSaver = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MyImageSaver"
QT_MOC_LITERAL(1, 13, 11), // "savePicture"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 2), // "id"
QT_MOC_LITERAL(4, 29, 11), // "objectImage"
QT_MOC_LITERAL(5, 41, 13) // "writePictures"

    },
    "MyImageSaver\0savePicture\0\0id\0objectImage\0"
    "writePictures"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyImageSaver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       5,    0,   29,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QObjectStar,    3,    4,
    QMetaType::Bool,

       0        // eod
};

void MyImageSaver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyImageSaver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->savePicture((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->writePictures();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyImageSaver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyImageSaver.data,
    qt_meta_data_MyImageSaver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyImageSaver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyImageSaver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyImageSaver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyImageSaver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
