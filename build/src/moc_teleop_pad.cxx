/****************************************************************************
** Meta object code from reading C++ file 'teleop_pad.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/teleop_pad.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teleop_pad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rviz_teleop_commander__TeleopPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   36,   35,   35, 0x0a,
      60,   36,   35,   35, 0x0a,
      96,   83,   35,   35, 0x0a,
     182,   35,   35,   35, 0x09,
     192,   35,   35,   35, 0x09,
     207,   35,   35,   35, 0x09,
     232,   35,   35,   35, 0x09,
     258,   35,   35,   35, 0x09,
     272,   35,   35,   35, 0x09,
     291,   35,   35,   35, 0x09,
     306,   35,   35,   35, 0x09,
     325,   35,   35,   35, 0x09,
     345,   35,   35,   35, 0x09,
     367,   35,   35,   35, 0x09,
     391,   35,   35,   35, 0x09,
     411,   35,   35,   35, 0x09,
     432,   35,   35,   35, 0x09,
     454,   35,   35,   35, 0x09,
     477,   35,   35,   35, 0x09,
     500,   35,   35,   35, 0x09,
     528,   35,   35,   35, 0x09,
     563,   35,   35,   35, 0x09,
     571,   35,   35,   35, 0x09,
     581,   35,   35,   35, 0x09,
     591,   35,   35,   35, 0x09,
     602,   35,   35,   35, 0x09,
     612,   35,   35,   35, 0x09,
     625,   35,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_rviz_teleop_commander__TeleopPanel[] = {
    "rviz_teleop_commander::TeleopPanel\0\0"
    "topic\0setTopic(QString)\0setTopic_tab3(QString)\0"
    "state,result\0"
    "doneCb(actionlib::SimpleClientGoalState,hexapodservice::hexapodservice"
    "ResultConstPtr)\0"
    "sendVel()\0sendVel_tab3()\0"
    "update_Linear_Velocity()\0"
    "update_Angular_Velocity()\0updateTopic()\0"
    "updateTopic_tab3()\0stopVelocity()\0"
    "OPENBUSButtonFuc()\0CLOSEBUSButtonFuc()\0"
    "ENABLEMOTORButonFuc()\0DISABLEMOTORButtonFuc()\0"
    "INITAXISButtonFuc()\0GETSTATUSButtonFuc()\0"
    "CLEARFAULTButtonFuc()\0ALLLEGRESETButtonFuc()\0"
    "ABORTMOTIONButtonFuc()\0"
    "list_msg_show_in_listview()\0"
    "list_msg_show_in_listview_giveup()\0"
    "upFuc()\0downFuc()\0leftFuc()\0rightFuc()\0"
    "spinFuc()\0spininvFuc()\0stopFuc_tab3()\0"
};

void rviz_teleop_commander::TeleopPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TeleopPanel *_t = static_cast<TeleopPanel *>(_o);
        switch (_id) {
        case 0: _t->setTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setTopic_tab3((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->doneCb((*reinterpret_cast< const actionlib::SimpleClientGoalState(*)>(_a[1])),(*reinterpret_cast< const hexapodservice::hexapodserviceResultConstPtr(*)>(_a[2]))); break;
        case 3: _t->sendVel(); break;
        case 4: _t->sendVel_tab3(); break;
        case 5: _t->update_Linear_Velocity(); break;
        case 6: _t->update_Angular_Velocity(); break;
        case 7: _t->updateTopic(); break;
        case 8: _t->updateTopic_tab3(); break;
        case 9: _t->stopVelocity(); break;
        case 10: _t->OPENBUSButtonFuc(); break;
        case 11: _t->CLOSEBUSButtonFuc(); break;
        case 12: _t->ENABLEMOTORButonFuc(); break;
        case 13: _t->DISABLEMOTORButtonFuc(); break;
        case 14: _t->INITAXISButtonFuc(); break;
        case 15: _t->GETSTATUSButtonFuc(); break;
        case 16: _t->CLEARFAULTButtonFuc(); break;
        case 17: _t->ALLLEGRESETButtonFuc(); break;
        case 18: _t->ABORTMOTIONButtonFuc(); break;
        case 19: _t->list_msg_show_in_listview(); break;
        case 20: _t->list_msg_show_in_listview_giveup(); break;
        case 21: _t->upFuc(); break;
        case 22: _t->downFuc(); break;
        case 23: _t->leftFuc(); break;
        case 24: _t->rightFuc(); break;
        case 25: _t->spinFuc(); break;
        case 26: _t->spininvFuc(); break;
        case 27: _t->stopFuc_tab3(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rviz_teleop_commander::TeleopPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rviz_teleop_commander::TeleopPanel::staticMetaObject = {
    { &rviz::Panel::staticMetaObject, qt_meta_stringdata_rviz_teleop_commander__TeleopPanel,
      qt_meta_data_rviz_teleop_commander__TeleopPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rviz_teleop_commander::TeleopPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rviz_teleop_commander::TeleopPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rviz_teleop_commander::TeleopPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_teleop_commander__TeleopPanel))
        return static_cast<void*>(const_cast< TeleopPanel*>(this));
    typedef rviz::Panel QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int rviz_teleop_commander::TeleopPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef rviz::Panel QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
