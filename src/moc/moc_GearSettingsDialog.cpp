/****************************************************************************
** Meta object code from reading C++ file 'GearSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/GearSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GearSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GearSettingsDialog_t {
    QByteArrayData data[14];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GearSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GearSettingsDialog_t qt_meta_stringdata_GearSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GearSettingsDialog"
QT_MOC_LITERAL(1, 19, 16), // "writeGearboxData"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 2), // "g1"
QT_MOC_LITERAL(4, 40, 2), // "g2"
QT_MOC_LITERAL(5, 43, 2), // "g3"
QT_MOC_LITERAL(6, 46, 2), // "g4"
QT_MOC_LITERAL(7, 49, 2), // "g5"
QT_MOC_LITERAL(8, 52, 2), // "g6"
QT_MOC_LITERAL(9, 55, 18), // "requestGearboxData"
QT_MOC_LITERAL(10, 74, 23), // "loadDefaultTransmission"
QT_MOC_LITERAL(11, 98, 4), // "text"
QT_MOC_LITERAL(12, 103, 17), // "loadMdGearboxData"
QT_MOC_LITERAL(13, 121, 14) // "myacceptedSlot"

    },
    "GearSettingsDialog\0writeGearboxData\0"
    "\0g1\0g2\0g3\0g4\0g5\0g6\0requestGearboxData\0"
    "loadDefaultTransmission\0text\0"
    "loadMdGearboxData\0myacceptedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GearSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   39,    2, 0x06 /* Public */,
       9,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   55,    2, 0x09 /* Protected */,
      12,    7,   58,    2, 0x09 /* Protected */,
      13,    0,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::UChar,    3,    4,    5,    6,    7,    8,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    3,    4,    5,    6,    7,    8,
    QMetaType::Void,

       0        // eod
};

void GearSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GearSettingsDialog *_t = static_cast<GearSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeGearboxData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 1: _t->requestGearboxData(); break;
        case 2: _t->loadDefaultTransmission((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->loadMdGearboxData((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 4: _t->myacceptedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GearSettingsDialog::*_t)(double , double , double , double , double , double , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GearSettingsDialog::writeGearboxData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GearSettingsDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GearSettingsDialog::requestGearboxData)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject GearSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GearSettingsDialog.data,
      qt_meta_data_GearSettingsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GearSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GearSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GearSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GearSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GearSettingsDialog::writeGearboxData(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6, quint8 _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GearSettingsDialog::requestGearboxData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
