/****************************************************************************
** Meta object code from reading C++ file 'ZegoSDKSignal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Signal/ZegoSDKSignal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZegoSDKSignal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QZegoAVSignal_t {
    QByteArrayData data[69];
    char stringdata0[902];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QZegoAVSignal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QZegoAVSignal_t qt_meta_stringdata_QZegoAVSignal = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QZegoAVSignal"
QT_MOC_LITERAL(1, 14, 12), // "sigLoginRoom"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "errorCode"
QT_MOC_LITERAL(4, 38, 6), // "roomId"
QT_MOC_LITERAL(5, 45, 18), // "QVector<StreamPtr>"
QT_MOC_LITERAL(6, 64, 11), // "vStreamList"
QT_MOC_LITERAL(7, 76, 13), // "sigLogoutRoom"
QT_MOC_LITERAL(8, 90, 13), // "sigDisconnect"
QT_MOC_LITERAL(9, 104, 10), // "sigKickOut"
QT_MOC_LITERAL(10, 115, 6), // "reason"
QT_MOC_LITERAL(11, 122, 18), // "sigSendRoomMessage"
QT_MOC_LITERAL(12, 141, 7), // "sendSeq"
QT_MOC_LITERAL(13, 149, 9), // "messageId"
QT_MOC_LITERAL(14, 159, 18), // "sigRecvRoomMessage"
QT_MOC_LITERAL(15, 178, 19), // "QVector<RoomMsgPtr>"
QT_MOC_LITERAL(16, 198, 12), // "vRoomMsgList"
QT_MOC_LITERAL(17, 211, 16), // "sigStreamUpdated"
QT_MOC_LITERAL(18, 228, 30), // "LIVEROOM::ZegoStreamUpdateType"
QT_MOC_LITERAL(19, 259, 4), // "type"
QT_MOC_LITERAL(20, 264, 21), // "sigPublishStateUpdate"
QT_MOC_LITERAL(21, 286, 9), // "stateCode"
QT_MOC_LITERAL(22, 296, 8), // "streamId"
QT_MOC_LITERAL(23, 305, 9), // "StreamPtr"
QT_MOC_LITERAL(24, 315, 10), // "streamInfo"
QT_MOC_LITERAL(25, 326, 18), // "sigPlayStateUpdate"
QT_MOC_LITERAL(26, 345, 23), // "sigPublishQualityUpdate"
QT_MOC_LITERAL(27, 369, 7), // "quality"
QT_MOC_LITERAL(28, 377, 8), // "videoFPS"
QT_MOC_LITERAL(29, 386, 8), // "videoKBS"
QT_MOC_LITERAL(30, 395, 20), // "sigPlayQualityUpdate"
QT_MOC_LITERAL(31, 416, 11), // "sigAuxInput"
QT_MOC_LITERAL(32, 428, 14), // "unsigned char*"
QT_MOC_LITERAL(33, 443, 5), // "pData"
QT_MOC_LITERAL(34, 449, 4), // "int*"
QT_MOC_LITERAL(35, 454, 8), // "pDataLen"
QT_MOC_LITERAL(36, 463, 13), // "pDataLenValue"
QT_MOC_LITERAL(37, 477, 11), // "pSampleRate"
QT_MOC_LITERAL(38, 489, 12), // "pNumChannels"
QT_MOC_LITERAL(39, 502, 18), // "sigJoinLiveRequest"
QT_MOC_LITERAL(40, 521, 3), // "seq"
QT_MOC_LITERAL(41, 525, 10), // "fromUserId"
QT_MOC_LITERAL(42, 536, 12), // "fromUserName"
QT_MOC_LITERAL(43, 549, 19), // "sigJoinLiveResponse"
QT_MOC_LITERAL(44, 569, 6), // "result"
QT_MOC_LITERAL(45, 576, 21), // "sigAudioDeviceChanged"
QT_MOC_LITERAL(46, 598, 19), // "AV::AudioDeviceType"
QT_MOC_LITERAL(47, 618, 10), // "deviceType"
QT_MOC_LITERAL(48, 629, 11), // "strDeviceId"
QT_MOC_LITERAL(49, 641, 13), // "strDeviceName"
QT_MOC_LITERAL(50, 655, 15), // "AV::DeviceState"
QT_MOC_LITERAL(51, 671, 5), // "state"
QT_MOC_LITERAL(52, 677, 21), // "sigVideoDeviceChanged"
QT_MOC_LITERAL(53, 699, 13), // "sigUserUpdate"
QT_MOC_LITERAL(54, 713, 16), // "QVector<QString>"
QT_MOC_LITERAL(55, 730, 7), // "userIDs"
QT_MOC_LITERAL(56, 738, 9), // "userNames"
QT_MOC_LITERAL(57, 748, 12), // "QVector<int>"
QT_MOC_LITERAL(58, 761, 9), // "userFlags"
QT_MOC_LITERAL(59, 771, 9), // "userRoles"
QT_MOC_LITERAL(60, 781, 9), // "userCount"
QT_MOC_LITERAL(61, 791, 28), // "LIVEROOM::ZegoUserUpdateType"
QT_MOC_LITERAL(62, 820, 12), // "sigMixStream"
QT_MOC_LITERAL(63, 833, 6), // "hlsUrl"
QT_MOC_LITERAL(64, 840, 7), // "rtmpUrl"
QT_MOC_LITERAL(65, 848, 11), // "mixStreamID"
QT_MOC_LITERAL(66, 860, 25), // "sigRecvEndJoinLiveCommand"
QT_MOC_LITERAL(67, 886, 6), // "userId"
QT_MOC_LITERAL(68, 893, 8) // "userName"

    },
    "QZegoAVSignal\0sigLoginRoom\0\0errorCode\0"
    "roomId\0QVector<StreamPtr>\0vStreamList\0"
    "sigLogoutRoom\0sigDisconnect\0sigKickOut\0"
    "reason\0sigSendRoomMessage\0sendSeq\0"
    "messageId\0sigRecvRoomMessage\0"
    "QVector<RoomMsgPtr>\0vRoomMsgList\0"
    "sigStreamUpdated\0LIVEROOM::ZegoStreamUpdateType\0"
    "type\0sigPublishStateUpdate\0stateCode\0"
    "streamId\0StreamPtr\0streamInfo\0"
    "sigPlayStateUpdate\0sigPublishQualityUpdate\0"
    "quality\0videoFPS\0videoKBS\0"
    "sigPlayQualityUpdate\0sigAuxInput\0"
    "unsigned char*\0pData\0int*\0pDataLen\0"
    "pDataLenValue\0pSampleRate\0pNumChannels\0"
    "sigJoinLiveRequest\0seq\0fromUserId\0"
    "fromUserName\0sigJoinLiveResponse\0"
    "result\0sigAudioDeviceChanged\0"
    "AV::AudioDeviceType\0deviceType\0"
    "strDeviceId\0strDeviceName\0AV::DeviceState\0"
    "state\0sigVideoDeviceChanged\0sigUserUpdate\0"
    "QVector<QString>\0userIDs\0userNames\0"
    "QVector<int>\0userFlags\0userRoles\0"
    "userCount\0LIVEROOM::ZegoUserUpdateType\0"
    "sigMixStream\0hlsUrl\0rtmpUrl\0mixStreamID\0"
    "sigRecvEndJoinLiveCommand\0userId\0"
    "userName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QZegoAVSignal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  109,    2, 0x06 /* Public */,
       7,    2,  116,    2, 0x06 /* Public */,
       8,    2,  121,    2, 0x06 /* Public */,
       9,    2,  126,    2, 0x06 /* Public */,
      11,    4,  131,    2, 0x06 /* Public */,
      14,    2,  140,    2, 0x06 /* Public */,
      17,    3,  145,    2, 0x06 /* Public */,
      20,    3,  152,    2, 0x06 /* Public */,
      25,    2,  159,    2, 0x06 /* Public */,
      26,    4,  164,    2, 0x06 /* Public */,
      30,    4,  173,    2, 0x06 /* Public */,
      31,    5,  182,    2, 0x06 /* Public */,
      39,    4,  193,    2, 0x06 /* Public */,
      43,    4,  202,    2, 0x06 /* Public */,
      45,    4,  211,    2, 0x06 /* Public */,
      52,    3,  220,    2, 0x06 /* Public */,
      53,    6,  227,    2, 0x06 /* Public */,
      62,    5,  240,    2, 0x06 /* Public */,
      66,    3,  251,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::ULongLong,    3,    4,   12,   13,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,    4,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5, 0x80000000 | 18,    4,    6,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 23,   21,   22,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   22,   27,   28,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   22,   27,   28,   29,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 34, QMetaType::Int, 0x80000000 | 34, 0x80000000 | 34,   33,   35,   36,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   40,   41,   42,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   44,   41,   42,   40,
    QMetaType::Void, 0x80000000 | 46, QMetaType::QString, QMetaType::QString, 0x80000000 | 50,   47,   48,   49,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 50,   48,   49,   51,
    QMetaType::Void, 0x80000000 | 54, 0x80000000 | 54, 0x80000000 | 57, 0x80000000 | 57, QMetaType::UInt, 0x80000000 | 61,   55,   56,   58,   59,   60,   19,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,   63,   64,   65,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   67,   68,    4,

       0        // eod
};

void QZegoAVSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QZegoAVSignal *_t = static_cast<QZegoAVSignal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigLoginRoom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVector<StreamPtr>(*)>(_a[3]))); break;
        case 1: _t->sigLogoutRoom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->sigDisconnect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->sigKickOut((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->sigSendRoomMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< unsigned long long(*)>(_a[4]))); break;
        case 5: _t->sigRecvRoomMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QVector<RoomMsgPtr>(*)>(_a[2]))); break;
        case 6: _t->sigStreamUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QVector<StreamPtr>(*)>(_a[2])),(*reinterpret_cast< LIVEROOM::ZegoStreamUpdateType(*)>(_a[3]))); break;
        case 7: _t->sigPublishStateUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< StreamPtr(*)>(_a[3]))); break;
        case 8: _t->sigPlayStateUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->sigPublishQualityUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 10: _t->sigPlayQualityUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 11: _t->sigAuxInput((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 12: _t->sigJoinLiveRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 13: _t->sigJoinLiveResponse((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: _t->sigAudioDeviceChanged((*reinterpret_cast< AV::AudioDeviceType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< AV::DeviceState(*)>(_a[4]))); break;
        case 15: _t->sigVideoDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< AV::DeviceState(*)>(_a[3]))); break;
        case 16: _t->sigUserUpdate((*reinterpret_cast< QVector<QString>(*)>(_a[1])),(*reinterpret_cast< QVector<QString>(*)>(_a[2])),(*reinterpret_cast< QVector<int>(*)>(_a[3])),(*reinterpret_cast< QVector<int>(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< LIVEROOM::ZegoUserUpdateType(*)>(_a[6]))); break;
        case 17: _t->sigMixStream((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 18: _t->sigRecvEndJoinLiveCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            case 3:
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & , QVector<StreamPtr> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigLoginRoom)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigLogoutRoom)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigDisconnect)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigKickOut)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & , int , unsigned long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigSendRoomMessage)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(const QString & , QVector<RoomMsgPtr> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigRecvRoomMessage)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(const QString & , QVector<StreamPtr> , LIVEROOM::ZegoStreamUpdateType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigStreamUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & , StreamPtr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigPublishStateUpdate)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigPlayStateUpdate)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(const QString & , int , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigPublishQualityUpdate)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(const QString & , int , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigPlayQualityUpdate)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(unsigned char * , int * , int , int * , int * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigAuxInput)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigJoinLiveRequest)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(int , const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigJoinLiveResponse)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(AV::AudioDeviceType , const QString & , const QString & , AV::DeviceState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigAudioDeviceChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(const QString & , const QString & , AV::DeviceState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigVideoDeviceChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(QVector<QString> , QVector<QString> , QVector<int> , QVector<int> , unsigned int , LIVEROOM::ZegoUserUpdateType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigUserUpdate)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(unsigned int , const QString & , const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigMixStream)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QZegoAVSignal::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZegoAVSignal::sigRecvEndJoinLiveCommand)) {
                *result = 18;
                return;
            }
        }
    }
}

const QMetaObject QZegoAVSignal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QZegoAVSignal.data,
      qt_meta_data_QZegoAVSignal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QZegoAVSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QZegoAVSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QZegoAVSignal.stringdata0))
        return static_cast<void*>(const_cast< QZegoAVSignal*>(this));
    if (!strcmp(_clname, "LIVEROOM::IRoomCallback"))
        return static_cast< LIVEROOM::IRoomCallback*>(const_cast< QZegoAVSignal*>(this));
    if (!strcmp(_clname, "LIVEROOM::ILivePublisherCallback"))
        return static_cast< LIVEROOM::ILivePublisherCallback*>(const_cast< QZegoAVSignal*>(this));
    if (!strcmp(_clname, "LIVEROOM::ILivePlayerCallback"))
        return static_cast< LIVEROOM::ILivePlayerCallback*>(const_cast< QZegoAVSignal*>(this));
    if (!strcmp(_clname, "LIVEROOM::IIMCallback"))
        return static_cast< LIVEROOM::IIMCallback*>(const_cast< QZegoAVSignal*>(this));
    if (!strcmp(_clname, "AV::IZegoDeviceStateCallback"))
        return static_cast< AV::IZegoDeviceStateCallback*>(const_cast< QZegoAVSignal*>(this));
    return QObject::qt_metacast(_clname);
}

int QZegoAVSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QZegoAVSignal::sigLoginRoom(int _t1, const QString & _t2, QVector<StreamPtr> _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QZegoAVSignal::sigLogoutRoom(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QZegoAVSignal::sigDisconnect(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QZegoAVSignal::sigKickOut(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QZegoAVSignal::sigSendRoomMessage(int _t1, const QString & _t2, int _t3, unsigned long long _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QZegoAVSignal::sigRecvRoomMessage(const QString & _t1, QVector<RoomMsgPtr> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QZegoAVSignal::sigStreamUpdated(const QString & _t1, QVector<StreamPtr> _t2, LIVEROOM::ZegoStreamUpdateType _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QZegoAVSignal::sigPublishStateUpdate(int _t1, const QString & _t2, StreamPtr _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QZegoAVSignal::sigPlayStateUpdate(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QZegoAVSignal::sigPublishQualityUpdate(const QString & _t1, int _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QZegoAVSignal::sigPlayQualityUpdate(const QString & _t1, int _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QZegoAVSignal::sigAuxInput(unsigned char * _t1, int * _t2, int _t3, int * _t4, int * _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QZegoAVSignal::sigJoinLiveRequest(int _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QZegoAVSignal::sigJoinLiveResponse(int _t1, const QString & _t2, const QString & _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QZegoAVSignal::sigAudioDeviceChanged(AV::AudioDeviceType _t1, const QString & _t2, const QString & _t3, AV::DeviceState _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QZegoAVSignal::sigVideoDeviceChanged(const QString & _t1, const QString & _t2, AV::DeviceState _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QZegoAVSignal::sigUserUpdate(QVector<QString> _t1, QVector<QString> _t2, QVector<int> _t3, QVector<int> _t4, unsigned int _t5, LIVEROOM::ZegoUserUpdateType _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QZegoAVSignal::sigMixStream(unsigned int _t1, const QString & _t2, const QString & _t3, const QString & _t4, int _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QZegoAVSignal::sigRecvEndJoinLiveCommand(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_END_MOC_NAMESPACE
