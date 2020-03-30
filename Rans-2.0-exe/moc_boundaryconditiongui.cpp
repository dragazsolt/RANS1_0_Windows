/****************************************************************************
** Meta object code from reading C++ file 'boundaryconditiongui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RANS-32bit/boundaryconditiongui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boundaryconditiongui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BoundaryConditionGUI_t {
    QByteArrayData data[27];
    char stringdata0[429];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoundaryConditionGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoundaryConditionGUI_t qt_meta_stringdata_BoundaryConditionGUI = {
    {
QT_MOC_LITERAL(0, 0, 20), // "BoundaryConditionGUI"
QT_MOC_LITERAL(1, 21, 23), // "SendTurbulenceModelData"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "TurbulenceModel"
QT_MOC_LITERAL(4, 62, 8), // "solverid"
QT_MOC_LITERAL(5, 71, 13), // "potentialfoam"
QT_MOC_LITERAL(6, 85, 18), // "applyboundarylayer"
QT_MOC_LITERAL(7, 104, 6), // "blayer"
QT_MOC_LITERAL(8, 111, 19), // "TurbulenceIntensity"
QT_MOC_LITERAL(9, 131, 9), // "Ch_Length"
QT_MOC_LITERAL(10, 141, 9), // "CONDITION"
QT_MOC_LITERAL(11, 151, 5), // "INLET"
QT_MOC_LITERAL(12, 157, 6), // "GROUND"
QT_MOC_LITERAL(13, 164, 7), // "TOPWALL"
QT_MOC_LITERAL(14, 172, 8), // "LEFTWALL"
QT_MOC_LITERAL(15, 181, 9), // "RIGHTWALL"
QT_MOC_LITERAL(16, 191, 14), // "QList<QString>"
QT_MOC_LITERAL(17, 206, 11), // "staticwalls"
QT_MOC_LITERAL(18, 218, 19), // "QList<ROTATIONWALL>"
QT_MOC_LITERAL(19, 238, 8), // "rotwalls"
QT_MOC_LITERAL(20, 247, 18), // "RotWallItemChanged"
QT_MOC_LITERAL(21, 266, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(22, 283, 32), // "on_AddWallToRotationWall_clicked"
QT_MOC_LITERAL(23, 316, 30), // "on_AddWallToStaticWall_clicked"
QT_MOC_LITERAL(24, 347, 28), // "on_SETPARAMETER_WALL_clicked"
QT_MOC_LITERAL(25, 376, 25), // "on_Done_Condition_clicked"
QT_MOC_LITERAL(26, 402, 26) // "on_Quit_ModelSetup_clicked"

    },
    "BoundaryConditionGUI\0SendTurbulenceModelData\0"
    "\0TurbulenceModel\0solverid\0potentialfoam\0"
    "applyboundarylayer\0blayer\0TurbulenceIntensity\0"
    "Ch_Length\0CONDITION\0INLET\0GROUND\0"
    "TOPWALL\0LEFTWALL\0RIGHTWALL\0QList<QString>\0"
    "staticwalls\0QList<ROTATIONWALL>\0"
    "rotwalls\0RotWallItemChanged\0"
    "QListWidgetItem*\0on_AddWallToRotationWall_clicked\0"
    "on_AddWallToStaticWall_clicked\0"
    "on_SETPARAMETER_WALL_clicked\0"
    "on_Done_Condition_clicked\0"
    "on_Quit_ModelSetup_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoundaryConditionGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   14,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,   78,    2, 0x08 /* Private */,
      22,    0,   81,    2, 0x08 /* Private */,
      23,    0,   82,    2, 0x08 /* Private */,
      24,    0,   83,    2, 0x08 /* Private */,
      25,    0,   84,    2, 0x08 /* Private */,
      26,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 10, 0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 18,    3,    4,    5,    6,    7,    8,    9,   11,   12,   13,   14,   15,   17,   19,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BoundaryConditionGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BoundaryConditionGUI *_t = static_cast<BoundaryConditionGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendTurbulenceModelData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const float(*)>(_a[5])),(*reinterpret_cast< const float(*)>(_a[6])),(*reinterpret_cast< const float(*)>(_a[7])),(*reinterpret_cast< const CONDITION(*)>(_a[8])),(*reinterpret_cast< const CONDITION(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QString(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QList<QString>(*)>(_a[13])),(*reinterpret_cast< const QList<ROTATIONWALL>(*)>(_a[14]))); break;
        case 1: _t->RotWallItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_AddWallToRotationWall_clicked(); break;
        case 3: _t->on_AddWallToStaticWall_clicked(); break;
        case 4: _t->on_SETPARAMETER_WALL_clicked(); break;
        case 5: _t->on_Done_Condition_clicked(); break;
        case 6: _t->on_Quit_ModelSetup_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 12:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BoundaryConditionGUI::*_t)(const QString & , const unsigned int & , bool , bool , const float & , const float & , const float & , const CONDITION & , const CONDITION & , const QString & , const QString & , const QString & , const QList<QString> & , const QList<ROTATIONWALL> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoundaryConditionGUI::SendTurbulenceModelData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BoundaryConditionGUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BoundaryConditionGUI.data,
      qt_meta_data_BoundaryConditionGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoundaryConditionGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoundaryConditionGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoundaryConditionGUI.stringdata0))
        return static_cast<void*>(const_cast< BoundaryConditionGUI*>(this));
    return QDialog::qt_metacast(_clname);
}

int BoundaryConditionGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BoundaryConditionGUI::SendTurbulenceModelData(const QString & _t1, const unsigned int & _t2, bool _t3, bool _t4, const float & _t5, const float & _t6, const float & _t7, const CONDITION & _t8, const CONDITION & _t9, const QString & _t10, const QString & _t11, const QString & _t12, const QList<QString> & _t13, const QList<ROTATIONWALL> & _t14)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
