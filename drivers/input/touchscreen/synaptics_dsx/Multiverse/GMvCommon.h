#pragma once

///////////////////////////////////////////////////////////////////////////////////
// GMvCommon.h
//---------------------------------------------------------------------------------
// Created by Byeongjae Gim
// Email: gaiama78@gmail.com, byeongjae.kim@samsung.com
///////////////////////////////////////////////////////////////////////////////////

// ! define
#if defined( DG_PRODUCT_K )
	#define DG_MV_PKT_PARITY_CRC16
	#define DG_MV_STRING_INFO_SIZE 32
#endif

// Multiverse Packet
#define DG_MV_PKT_SYNC_BYTE 0xFF
#if defined( DG_MV_PKT_PARITY_CRC16 )
	#define DG_MV_PKT_PARITY_SIZE_HEADER 2
#elif defined( DG_MV_PKT_PARITY_CRC32 )
	#define DG_MV_PKT_PARITY_SIZE_HEADER 4
#elif defined( DG_MV_PKT_PARITY_RS_10_6 )
	#define DG_MV_PKT_PARITY_SIZE_HEADER 4
#else
	#define DG_MV_PKT_PARITY_SIZE_HEADER 0
#endif
#define DG_MV_PKT_MAX_SIZE DG_KERNEL_PAGE_SIZE

// I2C
#define DG_MV_I2C_REG_PKT_HEADER_RX 0x6000
#define DG_MV_I2C_REG_PKT_HEADER_TX 0x6001
#define DG_MV_I2C_REG_PKT_PAYLOAD_RX 0x6002
#define DG_MV_I2C_REG_PKT_PAYLOAD_TX 0x6003
#define DG_MV_I2C_REG_ACK_LSB 0x6004
#define DG_MV_I2C_REG_ACK_MSB 0x6005
#define DG_MV_I2C_REG_VERSION_LSB 0x6006
#define DG_MV_I2C_REG_VERSION_MSB 0x6007
#define DG_MV_I2C_ACK_RETRY_COUNT 5
#define DG_MV_I2C_ACK_WAIT_MCS 1000
#define DG_MV_I2C_ACK_WAIT_COUNT 250 // 250ms

// Brane
#define DG_MV_BRANE_PATH _T("/sys/class/sec/Multiverse/Brane")
#define DG_MV_BRANE_BUFFER_MMAP_ENABLE 1
#define DG_MV_BRANE_BUFFER_MMAP_INTERCEPT 1
#define DG_MV_BRANE_SIGACTION_ENABLE 0
#define DG_MV_BRANE_SIGACTION_ID 50 // 34~64(realtime signal), realtime signal can send 32bit payload in siginfo.si_int. Sure?

// ! enum
typedef enum// : sint32
{
	EG_MV_SERVICE_SC_F = 0,
	EG_MV_SERVICE_SC_0,
	EG_MV_SERVICE_SC_1,
	EG_MV_SERVICE_MC_F,
	EG_MV_SERVICE_MC_0,
	EG_MV_SERVICE_MC_1,
	EG_MV_SERVICE_SSC_F,
	EG_MV_SERVICE_SSC_0,
	EG_MV_SERVICE_SSC_1,
	EG_MV_SERVICE_GRIP_TO_SNOOZE,
	EG_MV_SERVICE_GRIP_FOR_QUICK_CAMERA,
	EG_MV_SERVICE_GRIP_TO_CHANGE_SPEAKER,
	EG_MV_SERVICE_GRIP_TO_LOCK_SCREEN_ROTATION,
	EG_MV_SERVICE_PET_TO_CONTROL,
	EG_MV_SERVICE_NUM
} EG_MV_SERVICE;

typedef enum// : sint32
{
	EG_MV_ID_NONE = -1,
	EG_MV_ID_UNREGISTER_ALL,

	EG_MV_ID_SC_F_REGISTER = 100,
	EG_MV_ID_SC_F_UNREGISTER,
	EG_MV_ID_SC_F_DATA,

	EG_MV_ID_SC_0_REGISTER = 110,
	EG_MV_ID_SC_0_UNREGISTER,
	EG_MV_ID_SC_0_DATA,

	EG_MV_ID_SC_1_REGISTER = 120,
	EG_MV_ID_SC_1_UNREGISTER,
	EG_MV_ID_SC_1_DATA,

	EG_MV_ID_MC_F_REGISTER = 130,
	EG_MV_ID_MC_F_UNREGISTER,
	EG_MV_ID_MC_F_DATA,

	EG_MV_ID_MC_0_REGISTER = 140,
	EG_MV_ID_MC_0_UNREGISTER,
	EG_MV_ID_MC_0_DATA,

	EG_MV_ID_MC_1_REGISTER = 150,
	EG_MV_ID_MC_1_UNREGISTER,
	EG_MV_ID_MC_1_DATA,

	EG_MV_ID_SSC_F_REGISTER = 160,
	EG_MV_ID_SSC_F_UNREGISTER,
	EG_MV_ID_SSC_F_DATA,

	EG_MV_ID_SSC_0_REGISTER = 170,
	EG_MV_ID_SSC_0_UNREGISTER,
	EG_MV_ID_SSC_0_DATA,

	EG_MV_ID_SSC_1_REGISTER = 180,
	EG_MV_ID_SSC_1_UNREGISTER,
	EG_MV_ID_SSC_1_DATA,

	EG_MV_ID_GRIP_TO_SNOOZE_REGISTER = 190,
	EG_MV_ID_GRIP_TO_SNOOZE_UNREGISTER,
	EG_MV_ID_GRIP_TO_SNOOZE_DATA,

	EG_MV_ID_GRIP_FOR_QUICK_CAMERA_REGISTER = 200,
	EG_MV_ID_GRIP_FOR_QUICK_CAMERA_UNREGISTER,
	EG_MV_ID_GRIP_FOR_QUICK_CAMERA_DATA,

	EG_MV_ID_GRIP_TO_CHANGE_SPEAKER_REGISTER = 210,
	EG_MV_ID_GRIP_TO_CHANGE_SPEAKER_UNREGISTER,
	EG_MV_ID_GRIP_TO_CHANGE_SPEAKER_DATA,

	EG_MV_ID_GRIP_TO_LOCK_SCREEN_ROTATION_REGISTER = 220,
	EG_MV_ID_GRIP_TO_LOCK_SCREEN_ROTATION_UNREGISTER,
	EG_MV_ID_GRIP_TO_LOCK_SCREEN_ROTATION_DATA,

	EG_MV_ID_PET_TO_CONTROL_REGISTER = 230,
	EG_MV_ID_PET_TO_CONTROL_UNREGISTER,
	EG_MV_ID_PET_TO_CONTROL_DATA,
} EG_MV_ID;

typedef enum// : sint32
{
	EG_MV_DATA_TYPE_S8 = 0,
	EG_MV_DATA_TYPE_U8,
	EG_MV_DATA_TYPE_U8_NORM,
	EG_MV_DATA_TYPE_S16,
	EG_MV_DATA_TYPE_U16,
	EG_MV_DATA_TYPE_U16_NORM,
	EG_MV_DATA_TYPE_F32,
	EG_MV_DATA_TYPE_NUM
} EG_MV_DATA_TYPE;

typedef enum// : uint8
{
	EG_MV_PKT_ID_BRANE = 0,
	EG_MV_PKT_ID_BASIC,
	EG_MV_PKT_ID_SERVICE_START,
	EG_MV_PKT_ID_SERVICE_STOP,
	EG_MV_PKT_ID_SERVICE_DATA,
	EG_MV_PKT_ID_NUM
} EG_MV_PKT_ID;

typedef enum// : uint16
{
	EG_MV_PKT_ARG_BRANE_OPEN = 0,
	EG_MV_PKT_ARG_BRANE_CLOSE
} EG_MV_PKT_ARG_BRANE;

typedef enum// : uint16
{
	EG_MV_PKT_ARG_BASIC_WAIT = 0,
	EG_MV_PKT_ARG_BASIC_ACK,
	EG_MV_PKT_ARG_BASIC_NACK,
	EG_MV_PKT_ARG_BASIC_RESET,
	EG_MV_PKT_ARG_BASIC_INFO_TSP_SPEC
} EG_MV_PKT_ARG_BASIC;

// ! struct
#pragma pack( 1 )
typedef struct SGMvPktHdr // uint8[6]
{
	uint8 u8SyncByte, u8PktId;
	uint16 u16Arg;
	uint16 u16PldSize;
} TGMvPktHdr;

typedef struct SGMvBraneBufInfo
{
	uint16 u16TotalSize, u16WPos, u16RPos, u16RSize;
	uint8 pu8StringInfo[DG_MV_STRING_INFO_SIZE];
} TGMvBraneBufInfo;

typedef struct SGMvScImpulse
{
	unsigned u1Virtual : 1;
	unsigned u1HalfPixel : 1;
	unsigned u6X : 6; // ~63
	unsigned u6Level : 6; // ~63
	unsigned u2Reserved : 2;
} TGMvScImpulse;
#pragma pack()
