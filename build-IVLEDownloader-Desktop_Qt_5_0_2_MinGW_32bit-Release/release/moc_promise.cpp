/****************************************************************************
** Meta object code from reading C++ file 'promise.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VincentIVLEDownloader/promise.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'promise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Promise_t {
    QByteArrayData data[9];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Promise_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Promise_t qt_meta_stringdata_Promise = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 4),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 4),
QT_MOC_LITERAL(4, 19, 8),
QT_MOC_LITERAL(5, 28, 7),
QT_MOC_LITERAL(6, 36, 8),
QT_MOC_LITERAL(7, 45, 6),
QT_MOC_LITERAL(8, 52, 7)
    },
    "Promise\0done\0\0fail\0progress\0resolve\0"
    "Promise*\0reject\0advance\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Promise[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x05,
       3,    1,   62,    2, 0x05,
       4,    1,   65,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    1,   68,    2, 0x0a,
       5,    0,   71,    2, 0x2a,
       7,    1,   72,    2, 0x0a,
       7,    0,   75,    2, 0x2a,
       8,    1,   76,    2, 0x0a,
       8,    0,   79,    2, 0x2a,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,

 // slots: parameters
    0x80000000 | 6, QMetaType::QVariant,    2,
    0x80000000 | 6,
    0x80000000 | 6, QMetaType::QVariant,    2,
    0x80000000 | 6,
    0x80000000 | 6, QMetaType::QVariant,    2,
    0x80000000 | 6,

       0        // eod
};

void Promise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Promise *_t = static_cast<Promise *>(_o);
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->fail((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->progress((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: { Promise* _r = _t->resolve((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Promise**>(_a[0]) = _r; }  break;
        case 4: { Promise* _r = _t->resolve();
            if (_a[0]) *reinterpret_cast< Promise**>(_a[0]) = _r; }  break;
        case 5: { Promise* _r = _t->reject((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Promise**>(_a[0]) = _r; }  break;
        case 6: { Promise* _r = _t->reject();
            if (_a[0]) *reinterpret_cast< Promise**>(_a[0]) = _r; }  break;
        case 7: { Promise* _r = _t->advance((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Promise**>(_a[0]) = _r; }  break;
        case 8: { Promise* _r = _t->advance();
            if (_a[0]) *reinterpret_cast< Promise**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Promise::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Promise::done)) {
                *result = 0;
            }
        }
        {
            typedef void (Promise::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Promise::fail)) {
                *result = 1;
            }
        }
        {
            typedef void (Promise::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Promise::progress)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Promise::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Promise.data,
      qt_meta_data_Promise,  qt_static_metacall, 0, 0}
};


const QMetaObject *Promise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Promise::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Promise.stringdata))
        return static_cast<void*>(const_cast< Promise*>(this));
    return QObject::qt_metacast(_clname);
}

int Promise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Promise::done(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Promise::fail(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Promise::progress(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
