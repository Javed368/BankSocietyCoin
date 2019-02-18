/****************************************************************************
** Meta object code from reading C++ file 'masternodemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/masternodemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeManager_t {
    QByteArrayData data[23];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeManager_t qt_meta_stringdata_MasternodeManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MasternodeManager"
QT_MOC_LITERAL(1, 18, 14), // "updateNodeList"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "updateAdrenalineNode"
QT_MOC_LITERAL(4, 55, 5), // "alias"
QT_MOC_LITERAL(5, 61, 4), // "addr"
QT_MOC_LITERAL(6, 66, 7), // "privkey"
QT_MOC_LITERAL(7, 74, 6), // "txHash"
QT_MOC_LITERAL(8, 81, 7), // "txIndex"
QT_MOC_LITERAL(9, 89, 13), // "rewardAddress"
QT_MOC_LITERAL(10, 103, 16), // "rewardPercentage"
QT_MOC_LITERAL(11, 120, 6), // "status"
QT_MOC_LITERAL(12, 127, 23), // "on_UpdateButton_clicked"
QT_MOC_LITERAL(13, 151, 11), // "copyAddress"
QT_MOC_LITERAL(14, 163, 10), // "copyPubkey"
QT_MOC_LITERAL(15, 174, 33), // "on_openMNConfigfileButton_cli..."
QT_MOC_LITERAL(16, 208, 15), // "showContextMenu"
QT_MOC_LITERAL(17, 224, 23), // "on_createButton_clicked"
QT_MOC_LITERAL(18, 248, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(19, 271, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(20, 297, 37), // "on_tableWidget_2_itemSelectio..."
QT_MOC_LITERAL(21, 335, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(22, 363, 5) // "index"

    },
    "MasternodeManager\0updateNodeList\0\0"
    "updateAdrenalineNode\0alias\0addr\0privkey\0"
    "txHash\0txIndex\0rewardAddress\0"
    "rewardPercentage\0status\0on_UpdateButton_clicked\0"
    "copyAddress\0copyPubkey\0"
    "on_openMNConfigfileButton_clicked\0"
    "showContextMenu\0on_createButton_clicked\0"
    "on_startButton_clicked\0on_startAllButton_clicked\0"
    "on_tableWidget_2_itemSelectionChanged\0"
    "on_tabWidget_currentChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    8,   75,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    0,   93,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,
      16,    1,   96,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,
      20,    0,  102,    2, 0x08 /* Private */,
      21,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void MasternodeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeManager *_t = static_cast<MasternodeManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateNodeList(); break;
        case 1: _t->updateAdrenalineNode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 2: _t->on_UpdateButton_clicked(); break;
        case 3: _t->copyAddress(); break;
        case 4: _t->copyPubkey(); break;
        case 5: _t->on_openMNConfigfileButton_clicked(); break;
        case 6: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->on_createButton_clicked(); break;
        case 8: _t->on_startButton_clicked(); break;
        case 9: _t->on_startAllButton_clicked(); break;
        case 10: _t->on_tableWidget_2_itemSelectionChanged(); break;
        case 11: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeManager.data,
      qt_meta_data_MasternodeManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MasternodeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeManager.stringdata0))
        return static_cast<void*>(const_cast< MasternodeManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
