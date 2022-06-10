#pragma once

#include "descriptors.h"

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
///@addtogroup MipCommands
///@{
///@defgroup 3DM_COMMAND  3DM COMMAND
///
///@{

////////////////////////////////////////////////////////////////////////////////
// Descriptors
////////////////////////////////////////////////////////////////////////////////

enum Mip3DmCommand_Descriptors
{
    MIP_3DM_COMMAND_DESC_SET                         = 0x0C,
    
    MIP_CMD_DESC_3DM_POLL_IMU_MESSAGE                = 0x01,
    MIP_CMD_DESC_3DM_POLL_GNSS_MESSAGE               = 0x02,
    MIP_CMD_DESC_3DM_POLL_FILTER_MESSAGE             = 0x03,
    MIP_CMD_DESC_3DM_POLL_NMEA_MESSAGE               = 0x04,
    MIP_CMD_DESC_3DM_IMU_MESSAGE_FORMAT              = 0x08,
    MIP_CMD_DESC_3DM_GNSS_MESSAGE_FORMAT             = 0x09,
    MIP_CMD_DESC_3DM_FILTER_MESSAGE_FORMAT           = 0x0A,
    MIP_CMD_DESC_3DM_GET_IMU_BASE_RATE               = 0x06,
    MIP_CMD_DESC_3DM_GET_GNSS_BASE_RATE              = 0x07,
    MIP_CMD_DESC_3DM_GET_FILTER_BASE_RATE            = 0x0B,
    MIP_CMD_DESC_3DM_POLL_DATA                       = 0x0D,
    MIP_CMD_DESC_3DM_GET_BASE_RATE                   = 0x0E,
    MIP_CMD_DESC_3DM_MESSAGE_FORMAT                  = 0x0F,
    MIP_CMD_DESC_3DM_DEVICE_STARTUP_SETTINGS         = 0x30,
    MIP_CMD_DESC_3DM_UART_BAUDRATE                   = 0x40,
    MIP_CMD_DESC_3DM_CONFIGURE_FACTORY_STREAMING     = 0x10,
    MIP_CMD_DESC_3DM_CONTROL_DATA_STREAM             = 0x11,
    MIP_CMD_DESC_3DM_GNSS_SBAS_SETTINGS              = 0x22,
    MIP_CMD_DESC_3DM_GNSS_TIME_ASSISTANCE            = 0x24,
    MIP_CMD_DESC_3DM_ADVANCED_DATA_FILTER            = 0x50,
    MIP_CMD_DESC_3DM_PPS_SOURCE                      = 0x28,
    MIP_CMD_DESC_3DM_GPIO_CONFIG                     = 0x41,
    MIP_CMD_DESC_3DM_GPIO_STATE                      = 0x42,
    MIP_CMD_DESC_3DM_ODOMETER_CONFIG                 = 0x43,
    MIP_CMD_DESC_3DM_EVENT_SUPPORT                   = 0x2A,
    MIP_CMD_DESC_3DM_EVENT_CONTROL                   = 0x2B,
    MIP_CMD_DESC_3DM_EVENT_TRIGGER_STATUS            = 0x2C,
    MIP_CMD_DESC_3DM_EVENT_ACTION_STATUS             = 0x2D,
    MIP_CMD_DESC_3DM_EVENT_TRIGGER_CONFIG            = 0x2E,
    MIP_CMD_DESC_3DM_EVENT_ACTION_CONFIG             = 0x2F,
    MIP_CMD_DESC_3DM_ACCEL_BIAS                      = 0x37,
    MIP_CMD_DESC_3DM_GYRO_BIAS                       = 0x38,
    MIP_CMD_DESC_3DM_CAPTURE_GYRO_BIAS               = 0x39,
    MIP_CMD_DESC_3DM_HARD_IRON_OFFSET                = 0x3A,
    MIP_CMD_DESC_3DM_SOFT_IRON_MATRIX                = 0x3B,
    MIP_CMD_DESC_3DM_SENSOR2VEHICLE_TRANSFORM_EUL    = 0x31,
    MIP_CMD_DESC_3DM_SENSOR2VEHICLE_TRANSFORM_QUAT   = 0x32,
    MIP_CMD_DESC_3DM_SENSOR2VEHICLE_TRANSFORM_DCM    = 0x33,
    MIP_CMD_DESC_3DM_LEGACY_COMP_FILTER              = 0x51,
    MIP_CMD_DESC_3DM_SENSOR_RANGE                    = 0x52,
    MIP_CMD_DESC_3DM_CALIBRATED_RANGES               = 0x53,
    
    MIP_REPLY_DESC_3DM_IMU_MESSAGE_FORMAT            = 0x80,
    MIP_REPLY_DESC_3DM_GNSS_MESSAGE_FORMAT           = 0x81,
    MIP_REPLY_DESC_3DM_FILTER_MESSAGE_FORMAT         = 0x82,
    MIP_REPLY_DESC_3DM_IMU_BASE_RATE                 = 0x83,
    MIP_REPLY_DESC_3DM_GNSS_BASE_RATE                = 0x84,
    MIP_REPLY_DESC_3DM_FILTER_BASE_RATE              = 0x8A,
    MIP_REPLY_DESC_3DM_BASE_RATE                     = 0x8E,
    MIP_REPLY_DESC_3DM_MESSAGE_FORMAT                = 0x8F,
    MIP_REPLY_DESC_3DM_UART_BAUDRATE                 = 0x87,
    MIP_REPLY_DESC_3DM_DATASTREAM_ENABLE             = 0x85,
    MIP_REPLY_DESC_3DM_GNSS_SBAS_SETTINGS            = 0xA1,
    MIP_REPLY_DESC_3DM_GNSS_TIME_ASSISTANCE          = 0xA3,
    MIP_REPLY_DESC_3DM_ADVANCED_DATA_FILTER          = 0x8B,
    MIP_REPLY_DESC_3DM_PPS_SOURCE                    = 0xA8,
    MIP_REPLY_DESC_3DM_GPIO_CONFIG                   = 0xC1,
    MIP_REPLY_DESC_3DM_GPIO_STATE                    = 0xC2,
    MIP_REPLY_DESC_3DM_ODOMETER_CONFIG               = 0xC3,
    MIP_REPLY_DESC_3DM_EVENT_SUPPORT                 = 0xB4,
    MIP_REPLY_DESC_3DM_EVENT_CONTROL                 = 0xB5,
    MIP_REPLY_DESC_3DM_EVENT_TRIGGER_STATUS          = 0xB6,
    MIP_REPLY_DESC_3DM_EVENT_ACTION_STATUS           = 0xB7,
    MIP_REPLY_DESC_3DM_EVENT_TRIGGER_CONFIG          = 0xB8,
    MIP_REPLY_DESC_3DM_EVENT_ACTION_CONFIG           = 0xB9,
    MIP_REPLY_DESC_3DM_ACCEL_BIAS_VECTOR             = 0x9A,
    MIP_REPLY_DESC_3DM_GYRO_BIAS_VECTOR              = 0x9B,
    MIP_REPLY_DESC_3DM_HARD_IRON_OFFSET_VECTOR       = 0x9C,
    MIP_REPLY_DESC_3DM_SOFT_IRON_COMP_MATRIX         = 0x9D,
    MIP_REPLY_DESC_3DM_SENSOR2VEHICLE_TRANSFORM_EUL  = 0xB1,
    MIP_REPLY_DESC_3DM_SENSOR2VEHICLE_TRANSFORM_QUAT = 0xB2,
    MIP_REPLY_DESC_3DM_SENSOR2VEHICLE_TRANSFORM_DCM  = 0xB3,
    MIP_REPLY_DESC_3DM_LEGACY_COMP_FILTER            = 0x97,
    MIP_REPLY_DESC_3DM_SENSOR_RANGE                  = 0xD2,
    MIP_REPLY_DESC_3DM_CALIBRATED_RANGES             = 0xD3,
};

////////////////////////////////////////////////////////////////////////////////
// Shared Type Definitions
////////////////////////////////////////////////////////////////////////////////

enum MipPpsSource
{
    MIPPPSSOURCE_DISABLED   = 0,  ///<  PPS output is disabled. Not valid for PPS source command.
    MIPPPSSOURCE_RECEIVER_1 = 1,  ///<  PPS is provided by GNSS receiver 1.
    MIPPPSSOURCE_RECEIVER_2 = 2,  ///<  PPS is provided by GNSS receiver 2.
    MIPPPSSOURCE_GPIO       = 3,  ///<  PPS is provided to an external GPIO pin. Use the GPIO Setup command to choose and configure the pin.
    MIPPPSSOURCE_GENERATED  = 4,  ///<  PPS is generated from the system oscillator.
};
size_t insert_MipPpsSource(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipPpsSource self);
size_t extract_MipPpsSource(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipPpsSource* self);

enum MipSensorRangeType
{
    MIPSENSORRANGETYPE_ALL   = 0,  ///<  Only allowed for SAVE, LOAD, and DEFAULT function selectors.
    MIPSENSORRANGETYPE_ACCEL = 1,  ///<  Accelerometer. Range is specified in g.
    MIPSENSORRANGETYPE_GYRO  = 2,  ///<  Gyroscope. Range is specified in degrees/s.
    MIPSENSORRANGETYPE_MAG   = 3,  ///<  Magnetometer. Range is specified in Gauss.
    MIPSENSORRANGETYPE_PRESS = 4,  ///<  Pressure sensor. Range is specified in hPa.
};
size_t insert_MipSensorRangeType(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipSensorRangeType self);
size_t extract_MipSensorRangeType(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipSensorRangeType* self);


////////////////////////////////////////////////////////////////////////////////
// Mip Fields
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_poll_imu_message  3Dm Poll Imu Message
/// Poll the device for an IMU message with the specified format
/// 
/// This function polls for an IMU message using the provided format. The resulting message
/// will maintain the order of descriptors sent in the command and any unrecognized
/// descriptors are ignored. If the format is not provided, the device will attempt to use the
/// stored format (set with the Set IMU Message Format command.) If no format is provided
/// and there is no stored format, the device will respond with a NACK. The reply packet contains
/// an ACK/NACK field. The polled data packet is sent separately as an IMU Data packet.
///
///@{

struct MipCmd_3Dm_PollImuMessage
{
    bool                                              suppress_ack;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_PollImuMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollImuMessage* self);
size_t extract_MipCmd_3Dm_PollImuMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollImuMessage* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_poll_gnss_message  3Dm Poll Gnss Message
/// Poll the device for an GNSS message with the specified format
/// 
/// This function polls for a GNSS message using the provided format. The resulting message
/// will maintain the order of descriptors sent in the command and any unrecognized
/// descriptors are ignored. If the format is not provided, the device will attempt to use the
/// stored format (set with the Set GNSS Message Format command.) If no format is provided
/// and there is no stored format, the device will respond with a NACK. The reply packet contains
/// an ACK/NACK field. The polled data packet is sent separately as a GNSS Data packet.
///
///@{

struct MipCmd_3Dm_PollGnssMessage
{
    bool                                              suppress_ack;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_PollGnssMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollGnssMessage* self);
size_t extract_MipCmd_3Dm_PollGnssMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollGnssMessage* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_poll_filter_message  3Dm Poll Filter Message
/// Poll the device for an Estimation Filter message with the specified format
/// 
/// This function polls for an Estimation Filter message using the provided format. The resulting message
/// will maintain the order of descriptors sent in the command and any unrecognized
/// descriptors are ignored. If the format is not provided, the device will attempt to use the
/// stored format (set with the Set Estimation Filter Message Format command.) If no format is provided
/// and there is no stored format, the device will respond with a NACK. The reply packet contains
/// an ACK/NACK field. The polled data packet is sent separately as an Estimation Filter Data packet.
///
///@{

struct MipCmd_3Dm_PollFilterMessage
{
    bool                                              suppress_ack;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_PollFilterMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollFilterMessage* self);
size_t extract_MipCmd_3Dm_PollFilterMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollFilterMessage* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_poll_nmea_message  3Dm Poll Nmea Message
///
///@{

struct MipCmd_3Dm_PollNmeaMessage
{
    bool                                              suppress_ack;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_PollNmeaMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollNmeaMessage* self);
size_t extract_MipCmd_3Dm_PollNmeaMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollNmeaMessage* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_imu_message_format  3Dm Imu Message Format
/// Set, read, or save the format of the IMU data packet.
/// 
/// The resulting data messages will maintain the order of descriptors sent in the command.
///
///@{

struct MipCmd_3Dm_ImuMessageFormat
{
    enum MipFunctionSelector                          function;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_ImuMessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuMessageFormat* self);
size_t extract_MipCmd_3Dm_ImuMessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuMessageFormat* self);

struct MipCmd_3Dm_ImuMessageFormat_Response
{
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_ImuMessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuMessageFormat_Response* self);
size_t extract_MipCmd_3Dm_ImuMessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuMessageFormat_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_gps_message_format  3Dm Gps Message Format
/// Set, read, or save the format of the GNSS data packet.
/// 
/// The resulting data messages will maintain the order of descriptors sent in the command.
///
///@{

struct MipCmd_3Dm_GpsMessageFormat
{
    enum MipFunctionSelector                          function;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_GpsMessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsMessageFormat* self);
size_t extract_MipCmd_3Dm_GpsMessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsMessageFormat* self);

struct MipCmd_3Dm_GpsMessageFormat_Response
{
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_GpsMessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsMessageFormat_Response* self);
size_t extract_MipCmd_3Dm_GpsMessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsMessageFormat_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_filter_message_format  3Dm Filter Message Format
/// Set, read, or save the format of the Estimation Filter data packet.
/// 
/// The resulting data messages will maintain the order of descriptors sent in the command.
///
///@{

struct MipCmd_3Dm_FilterMessageFormat
{
    enum MipFunctionSelector                          function;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_FilterMessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterMessageFormat* self);
size_t extract_MipCmd_3Dm_FilterMessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterMessageFormat* self);

struct MipCmd_3Dm_FilterMessageFormat_Response
{
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_FilterMessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterMessageFormat_Response* self);
size_t extract_MipCmd_3Dm_FilterMessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterMessageFormat_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_imu_get_base_rate  3Dm Imu Get Base Rate
/// Get the base rate for the IMU data in Hz
/// 
/// This is the fastest rate for this type of data available on the device.
/// This is used in conjunction with the IMU Message Format Command to set streaming data at a specified rate.
///
///@{

struct MipCmd_3Dm_ImuGetBaseRate
{
};
size_t insert_MipCmd_3Dm_ImuGetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuGetBaseRate* self);
size_t extract_MipCmd_3Dm_ImuGetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuGetBaseRate* self);

struct MipCmd_3Dm_ImuGetBaseRate_Response
{
    uint16_t                                          rate;
};
size_t insert_MipCmd_3Dm_ImuGetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuGetBaseRate_Response* self);
size_t extract_MipCmd_3Dm_ImuGetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuGetBaseRate_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_gps_get_base_rate  3Dm Gps Get Base Rate
/// Get the base rate for the GNSS data in Hz
/// 
/// This is the fastest rate for this type of data available on the device.
/// This is used in conjunction with the GNSS Message Format Command to set streaming data at a specified rate.
///
///@{

struct MipCmd_3Dm_GpsGetBaseRate
{
};
size_t insert_MipCmd_3Dm_GpsGetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsGetBaseRate* self);
size_t extract_MipCmd_3Dm_GpsGetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsGetBaseRate* self);

struct MipCmd_3Dm_GpsGetBaseRate_Response
{
    uint16_t                                          rate;
};
size_t insert_MipCmd_3Dm_GpsGetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsGetBaseRate_Response* self);
size_t extract_MipCmd_3Dm_GpsGetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsGetBaseRate_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_filter_get_base_rate  3Dm Filter Get Base Rate
/// Get the base rate for the Estimation Filter data in Hz
/// 
/// This is the fastest rate for this type of data available on the device.
/// This is used in conjunction with the Estimation Filter Message Format Command to set streaming data at a specified rate.
///
///@{

struct MipCmd_3Dm_FilterGetBaseRate
{
};
size_t insert_MipCmd_3Dm_FilterGetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterGetBaseRate* self);
size_t extract_MipCmd_3Dm_FilterGetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterGetBaseRate* self);

struct MipCmd_3Dm_FilterGetBaseRate_Response
{
    uint16_t                                          rate;
};
size_t insert_MipCmd_3Dm_FilterGetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterGetBaseRate_Response* self);
size_t extract_MipCmd_3Dm_FilterGetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterGetBaseRate_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_poll_data  3Dm Poll Data
/// Poll the device for a message with the specified descriptor set and format.
/// 
/// This function polls for a message using the provided format. The resulting message
/// will maintain the order of descriptors sent in the command and any unrecognized
/// descriptors are ignored. If the format is not provided, the device will attempt to use the
/// stored format (set with the Set Message Format command.) If no format is provided
/// and there is no stored format, the device will respond with a NACK. The reply packet contains
/// an ACK/NACK field. The polled data packet is sent separately as a normal Data packet.
///
///@{

struct MipCmd_3Dm_PollData
{
    uint8_t                                           desc_set;
    bool                                              suppress_ack;
    uint8_t                                           num_descriptors;
    uint8_t*                                          descriptors;
};
size_t insert_MipCmd_3Dm_PollData(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollData* self);
size_t extract_MipCmd_3Dm_PollData(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollData* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_get_base_rate  3Dm Get Base Rate
/// Get the base rate for the specified descriptor set in Hz.
///
///@{

struct MipCmd_3Dm_GetBaseRate
{
    uint8_t                                           desc_set;
};
size_t insert_MipCmd_3Dm_GetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GetBaseRate* self);
size_t extract_MipCmd_3Dm_GetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GetBaseRate* self);

struct MipCmd_3Dm_GetBaseRate_Response
{
    uint8_t                                           desc_set;
    uint16_t                                          rate;
};
size_t insert_MipCmd_3Dm_GetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GetBaseRate_Response* self);
size_t extract_MipCmd_3Dm_GetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GetBaseRate_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_message_format  3Dm Message Format
/// Set, read, or save the format for a given data packet.
/// 
/// The resulting data messages will maintain the order of descriptors sent in the command.
///
///@{

struct MipCmd_3Dm_MessageFormat
{
    enum MipFunctionSelector                          function;
    uint8_t                                           desc_set;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_MessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MessageFormat* self);
size_t extract_MipCmd_3Dm_MessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MessageFormat* self);

struct MipCmd_3Dm_MessageFormat_Response
{
    uint8_t                                           desc_set;
    uint8_t                                           num_descriptors;
    struct MipDescriptorRate*                         descriptors;
};
size_t insert_MipCmd_3Dm_MessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MessageFormat_Response* self);
size_t extract_MipCmd_3Dm_MessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MessageFormat_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_device_settings  3Dm Device Settings
/// Save, Load, or Reset to Default the values for all device settings.
/// 
/// When a save current settings command is issued, a brief data disturbance may occur while all settings are written to non-volatile memory.
/// 
/// This command should have a long timeout as it may take up to 1 second to complete.
///
///@{

struct MipCmd_3Dm_DeviceSettings
{
    enum MipFunctionSelector                          function;
};
size_t insert_MipCmd_3Dm_DeviceSettings(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_DeviceSettings* self);
size_t extract_MipCmd_3Dm_DeviceSettings(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_DeviceSettings* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_uart_baudrate  3Dm Uart Baudrate
/// Read, Save, Load, or Reset to Default the baud rate of the main communication channel.
/// 
/// For all functions except 0x01 (use new settings), the new baud rate value is ignored.
/// Please see the device user manual for supported baud rates.
/// 
/// The device will wait until all incoming and outgoing data has been sent, up
/// to a maximum of 250 ms, before applying any change.
/// 
/// No guarantee is provided as to what happens to commands issued during this
/// delay period; They may or may not be processed and any responses aren't
/// guaranteed to be at one rate or the other. The same applies to data packets.
/// 
/// It is highly recommended that the device be idle before issuing this command
/// and that it be issued in its own packet. Users should wait 250 ms after
/// sending this command before further interaction.
///
///@{

struct MipCmd_3Dm_UartBaudrate
{
    enum MipFunctionSelector                          function;
    uint32_t                                          baud;
};
size_t insert_MipCmd_3Dm_UartBaudrate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_UartBaudrate* self);
size_t extract_MipCmd_3Dm_UartBaudrate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_UartBaudrate* self);

struct MipCmd_3Dm_UartBaudrate_Response
{
    uint32_t                                          baud;
};
size_t insert_MipCmd_3Dm_UartBaudrate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_UartBaudrate_Response* self);
size_t extract_MipCmd_3Dm_UartBaudrate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_UartBaudrate_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_factory_streaming  3Dm Factory Streaming
/// Configures the device for recording data for technical support.
/// 
/// This command will configure all available data streams to predefined
/// formats designed to be used with technical support.
///
///@{

enum MipCmd_3Dm_FactoryStreaming_Action
{
    MIPCMD_3DM_FACTORYSTREAMING_ACTION_OVERWRITE = 0,  ///<  Replaces the message format(s), removing any existing descriptors.
    MIPCMD_3DM_FACTORYSTREAMING_ACTION_MERGE     = 1,  ///<  Merges support descriptors into existing format(s). May reorder descriptors.
    MIPCMD_3DM_FACTORYSTREAMING_ACTION_ADD       = 2,  ///<  Adds descriptors to the current message format(s) without changing existing descriptors. May result in duplicates.
};
size_t insert_MipCmd_3Dm_FactoryStreaming_Action(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_FactoryStreaming_Action self);
size_t extract_MipCmd_3Dm_FactoryStreaming_Action(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_FactoryStreaming_Action* self);

struct MipCmd_3Dm_FactoryStreaming
{
    enum MipCmd_3Dm_FactoryStreaming_Action           action;
    uint8_t                                           reserved;
};
size_t insert_MipCmd_3Dm_FactoryStreaming(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FactoryStreaming* self);
size_t extract_MipCmd_3Dm_FactoryStreaming(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FactoryStreaming* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_datastream_control  3Dm Datastream Control
/// Enable/disable the selected data stream.
/// 
/// Each data stream (descriptor set) can be enabled or disabled.
/// The default for the device is all streams enabled.
/// For all functions except 0x01 (use new setting),
/// the new enable flag value is ignored and can be omitted.
///
///@{

struct MipCmd_3Dm_DatastreamControl
{
    enum MipFunctionSelector                          function;
    uint8_t                                           desc_set;
    bool                                              enable;
};
size_t insert_MipCmd_3Dm_DatastreamControl(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_DatastreamControl* self);
size_t extract_MipCmd_3Dm_DatastreamControl(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_DatastreamControl* self);

struct MipCmd_3Dm_DatastreamControl_Response
{
    uint8_t                                           desc_set;
    bool                                              enabled;
};
size_t insert_MipCmd_3Dm_DatastreamControl_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_DatastreamControl_Response* self);
size_t extract_MipCmd_3Dm_DatastreamControl_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_DatastreamControl_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_gnss_sbas_settings  3Dm Gnss Sbas Settings
/// Configure the SBAS subsystem
/// 
/// 
/// 
///
///@{

enum MipCmd_3Dm_GnssSbasSettings_Sbasoptions
{
    MIPCMD_3DM_GNSSSBASSETTINGS_SBASOPTIONS_ENABLE_RANGING     = 0x01,
    MIPCMD_3DM_GNSSSBASSETTINGS_SBASOPTIONS_ENABLE_CORRECTIONS = 0x02,
    MIPCMD_3DM_GNSSSBASSETTINGS_SBASOPTIONS_APPLY_INTEGRITY    = 0x04,
};
size_t insert_MipCmd_3Dm_GnssSbasSettings_Sbasoptions(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_GnssSbasSettings_Sbasoptions self);
size_t extract_MipCmd_3Dm_GnssSbasSettings_Sbasoptions(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_GnssSbasSettings_Sbasoptions* self);

struct MipCmd_3Dm_GnssSbasSettings
{
    enum MipFunctionSelector                          function;
    uint8_t                                           enable_sbas;
    enum MipCmd_3Dm_GnssSbasSettings_Sbasoptions      sbas_options;
    uint8_t                                           num_included_prns;
    uint16_t*                                         included_prns;
};
size_t insert_MipCmd_3Dm_GnssSbasSettings(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssSbasSettings* self);
size_t extract_MipCmd_3Dm_GnssSbasSettings(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssSbasSettings* self);

struct MipCmd_3Dm_GnssSbasSettings_Response
{
    uint8_t                                           enable_sbas;
    enum MipCmd_3Dm_GnssSbasSettings_Sbasoptions      sbas_options;
    uint8_t                                           num_included_prns;
    uint16_t*                                         included_prns;
};
size_t insert_MipCmd_3Dm_GnssSbasSettings_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssSbasSettings_Response* self);
size_t extract_MipCmd_3Dm_GnssSbasSettings_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssSbasSettings_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_gnss_time_assistance  3Dm Gnss Time Assistance
/// Provide the GNSS subsystem with initial time information.
/// 
/// This message is required immediately after power up if GNSS Assist was enabled when the device was powered off.
/// This will initialize the subsystem clock to help reduce the time to first fix (TTFF).
///
///@{

struct MipCmd_3Dm_GnssTimeAssistance
{
    enum MipFunctionSelector                          function;
    double                                            tow;
    uint16_t                                          week_number;
    float                                             accuracy;
};
size_t insert_MipCmd_3Dm_GnssTimeAssistance(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssTimeAssistance* self);
size_t extract_MipCmd_3Dm_GnssTimeAssistance(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssTimeAssistance* self);

struct MipCmd_3Dm_GnssTimeAssistance_Response
{
    double                                            tow;
    uint16_t                                          week_number;
    float                                             accuracy;
};
size_t insert_MipCmd_3Dm_GnssTimeAssistance_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssTimeAssistance_Response* self);
size_t extract_MipCmd_3Dm_GnssTimeAssistance_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssTimeAssistance_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_adv_lowpass_filter  3Dm Adv Lowpass Filter
/// Advanced configuration for the IMU data quantity low-pass filters.
/// 
/// The scaled data quantities are by default filtered through a single-pole IIR low-pass filter
/// which is configured with a -3dB cutoff frequency of half the reporting frequency (set by
/// decimation factor in the IMU Message Format command) to prevent aliasing on a per data
/// quantity basis. This advanced configuration command allows for the cutoff frequency to
/// be configured independently of the data reporting frequency as well as allowing for a
/// complete bypass of the digital low-pass filter.
/// 
/// Possible data descriptors:
/// 0x04 – Scaled accelerometer data
/// 0x05 – Scaled gyro data
/// 0x06 – Scaled magnetometer data (if applicable)
/// 0x17 – Scaled pressure data (if applicable)
///
///@{

struct MipCmd_3Dm_AdvLowpassFilter
{
    enum MipFunctionSelector                          function;
    uint8_t                                           target_descriptor;
    bool                                              enable;
    bool                                              manual;
    uint16_t                                          frequency;
    uint8_t                                           reserved;
};
size_t insert_MipCmd_3Dm_AdvLowpassFilter(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AdvLowpassFilter* self);
size_t extract_MipCmd_3Dm_AdvLowpassFilter(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AdvLowpassFilter* self);

struct MipCmd_3Dm_AdvLowpassFilter_Response
{
    uint8_t                                           target_descriptor;
    bool                                              enable;
    bool                                              manual;
    uint16_t                                          frequency;
    uint8_t                                           reserved;
};
size_t insert_MipCmd_3Dm_AdvLowpassFilter_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AdvLowpassFilter_Response* self);
size_t extract_MipCmd_3Dm_AdvLowpassFilter_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AdvLowpassFilter_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_pps_source  3Dm Pps Source
/// Controls the Pulse Per Second (PPS) source.
///
///@{

struct MipCmd_3Dm_PpsSource
{
    enum MipFunctionSelector                          function;
    enum MipPpsSource                                 source;
};
size_t insert_MipCmd_3Dm_PpsSource(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PpsSource* self);
size_t extract_MipCmd_3Dm_PpsSource(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PpsSource* self);

struct MipCmd_3Dm_PpsSource_Response
{
    enum MipPpsSource                                 source;
};
size_t insert_MipCmd_3Dm_PpsSource_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PpsSource_Response* self);
size_t extract_MipCmd_3Dm_PpsSource_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PpsSource_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_gpio_config  3Dm Gpio Config
/// Configures the user GPIO pins on the connector for use with several built-in functions or for general input or output.
/// 
/// GPIO pins are device-dependent. Some features are only available on
/// certain pins. Some behaviors require specific configurations.
/// Consult the device user manual for restrictions and default settings.
/// 
/// To avoid glitches on GPIOs configured as an output in a mode other than
/// GPIO, always configure the relevant function before setting up the pin
/// with this command. Otherwise, the pin state will be undefined between
/// this command and the one to set up the feature. For input pins, use
/// this command first so the state is well-defined when the feature is
/// initialized.
/// 
/// Some configurations can only be active on one pin at a time. If such
/// configuration is applied to a second pin, the second one will take
/// precedence and the original pin's configuration will be reset.
/// 
///
///@{

enum MipCmd_3Dm_GpioConfig_Feature
{
    MIPCMD_3DM_GPIOCONFIG_FEATURE_UNUSED    = 0,  ///<  The pin is not used. It may be technically possible to read the pin state in this mode, but this is not guaranteed to be true of all devices or pins.
    MIPCMD_3DM_GPIOCONFIG_FEATURE_GPIO      = 1,  ///<  General purpose input or output. Use this for direct control of pin output state or to stream the state of the pin.
    MIPCMD_3DM_GPIOCONFIG_FEATURE_PPS       = 2,  ///<  Pulse per second input or output.
    MIPCMD_3DM_GPIOCONFIG_FEATURE_ENCODER   = 3,  ///<  Motor encoder/odometer input.
    MIPCMD_3DM_GPIOCONFIG_FEATURE_TIMESTAMP = 4,  ///<  Precision Timestamping. Use with Event Trigger Configuration (0x0C,0x2E).
    MIPCMD_3DM_GPIOCONFIG_FEATURE_POWER     = 5,  ///<  Controls the device power state (e.g. enter low power mode).
};
size_t insert_MipCmd_3Dm_GpioConfig_Feature(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_GpioConfig_Feature self);
size_t extract_MipCmd_3Dm_GpioConfig_Feature(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_GpioConfig_Feature* self);

enum MipCmd_3Dm_GpioConfig_Behavior
{
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_UNUSED            = 0,  ///<  Use 0 unless otherwise specified.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_GPIO_INPUT        = 1,  ///<  Pin will be an input. This can be used to stream or poll the value and is the default setting.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_GPIO_OUTPUT_LOW   = 2,  ///<  Pin is an output initially in the LOW state. This state will be restored during system startup if the configuration is saved.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_GPIO_OUTPUT_HIGH  = 3,  ///<  Pin is an output initially in the HIGH state. This state will be restored during system startup if the configuration is saved.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_PPS_INPUT         = 1,  ///<  Pin will receive the pulse-per-second signal. Only one pin can have this behavior. This will only work if the PPS Source command is configured to GPIO.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_PPS_OUTPUT        = 2,  ///<  Pin will transmit the pulse-per-second signal from the device.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_ENCODER_A         = 1,  ///<  Encoder "A" quadrature input. Only one pin can have this behavior. The last command to set this behavior will take precedence.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_ENCODER_B         = 2,  ///<  Encoder "B" quadrature input. Only one pin can have this behavior. The last command to set this behavior will take precedence.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_TIMESTAMP_RISING  = 1,  ///<  Rising edges will be timestamped.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_TIMESTAMP_FALLING = 2,  ///<  Falling edges will be timestamped.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_TIMESTAMP_EITHER  = 3,  ///<  Both rising and falling edges will be timestamped.
    MIPCMD_3DM_GPIOCONFIG_BEHAVIOR_POWER_SHUTDOWN    = 1,  ///<  A logic 1 applied to the pin will place the device in low-power mode. A full restart is executed after the signal is removed.
};
size_t insert_MipCmd_3Dm_GpioConfig_Behavior(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_GpioConfig_Behavior self);
size_t extract_MipCmd_3Dm_GpioConfig_Behavior(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_GpioConfig_Behavior* self);

enum MipCmd_3Dm_GpioConfig_Pinmode
{
    MIPCMD_3DM_GPIOCONFIG_PINMODE_OPEN_DRAIN = 0x01,
    MIPCMD_3DM_GPIOCONFIG_PINMODE_PULLDOWN   = 0x02,
    MIPCMD_3DM_GPIOCONFIG_PINMODE_PULLUP     = 0x04,
};
size_t insert_MipCmd_3Dm_GpioConfig_Pinmode(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_GpioConfig_Pinmode self);
size_t extract_MipCmd_3Dm_GpioConfig_Pinmode(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_GpioConfig_Pinmode* self);

struct MipCmd_3Dm_GpioConfig
{
    enum MipFunctionSelector                          function;
    uint8_t                                           pin;
    enum MipCmd_3Dm_GpioConfig_Feature                feature;
    enum MipCmd_3Dm_GpioConfig_Behavior               behavior;
    enum MipCmd_3Dm_GpioConfig_Pinmode                pin_mode;
};
size_t insert_MipCmd_3Dm_GpioConfig(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioConfig* self);
size_t extract_MipCmd_3Dm_GpioConfig(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioConfig* self);

struct MipCmd_3Dm_GpioConfig_Response
{
    uint8_t                                           pin;
    enum MipCmd_3Dm_GpioConfig_Feature                feature;
    enum MipCmd_3Dm_GpioConfig_Behavior               behavior;
    enum MipCmd_3Dm_GpioConfig_Pinmode                pin_mode;
};
size_t insert_MipCmd_3Dm_GpioConfig_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioConfig_Response* self);
size_t extract_MipCmd_3Dm_GpioConfig_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioConfig_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_gpio_state  3Dm Gpio State
/// Allows the state of the pin to be read or controlled.
/// 
/// This command serves two purposes: 1) To allow reading the state of a pin via command,
/// rather than polling a data quantity, and 2) to provide a way to set the output state
/// without also having to specify the operating mode.
/// 
/// The state read back from the pin is the physical state of the pin, rather than a
/// configuration value. The state can be read regardless of its configuration as long as
/// the device supports GPIO input on that pin. If the pin is set to an output, the read
/// value would match the output value.
/// 
/// While the state of a pin can always be set, it will only have an observable effect if
/// the pin is set to output mode.
/// 
/// This command does not support saving, loading, or reseting the state. Instead, use the
/// GPIO Configuration command, which allows the initial state to be configured.
///
///@{

struct MipCmd_3Dm_GpioState
{
    enum MipFunctionSelector                          function;
    uint8_t                                           pin;
    bool                                              state;
};
size_t insert_MipCmd_3Dm_GpioState(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioState* self);
size_t extract_MipCmd_3Dm_GpioState(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioState* self);

struct MipCmd_3Dm_GpioState_Response
{
    uint8_t                                           pin;
    bool                                              state;
};
size_t insert_MipCmd_3Dm_GpioState_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioState_Response* self);
size_t extract_MipCmd_3Dm_GpioState_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioState_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_odometer  3Dm Odometer
/// Configures the hardware odometer interface.
/// 
///
///@{

enum MipCmd_3Dm_Odometer_Mode
{
    MIPCMD_3DM_ODOMETER_MODE_DISABLED   = 0,  ///<  Encoder is disabled.
    MIPCMD_3DM_ODOMETER_MODE_QUADRATURE = 2,  ///<  Quadrature encoder mode.
};
size_t insert_MipCmd_3Dm_Odometer_Mode(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_Odometer_Mode self);
size_t extract_MipCmd_3Dm_Odometer_Mode(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_Odometer_Mode* self);

struct MipCmd_3Dm_Odometer
{
    enum MipFunctionSelector                          function;
    enum MipCmd_3Dm_Odometer_Mode                     mode;
    float                                             scaling;
    float                                             uncertainty;
};
size_t insert_MipCmd_3Dm_Odometer(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Odometer* self);
size_t extract_MipCmd_3Dm_Odometer(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Odometer* self);

struct MipCmd_3Dm_Odometer_Response
{
    enum MipCmd_3Dm_Odometer_Mode                     mode;
    float                                             scaling;
    float                                             uncertainty;
};
size_t insert_MipCmd_3Dm_Odometer_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Odometer_Response* self);
size_t extract_MipCmd_3Dm_Odometer_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Odometer_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_event_support  3Dm Event Support
/// Lists the available trigger or action types.
/// 
/// There are a limited number of trigger and action slots available
/// in the device. Up to M triggers and N actions can be configured at once
/// in slots 1..M and 1..N respectively. M and N are identified by the
/// max_instances field in the response with the appropriate query selector.
/// 
/// Each slot can be configured as one of a variety of different types of
/// triggers or actions. The supported types are enumerated in the response
/// to this command. Additionally, there is a limit on the number of a given
/// type. In other words, while the device may support M triggers in total,
/// only a few of them maybe usable as a given type. This limit helps optimize
/// device resources. The limit is identified in the count field.
/// 
/// All of the information in this command is available in the user manual.
/// This command provides a programmatic method for obtaining the information.
/// 
///
///@{

enum MipCmd_3Dm_EventSupport_Query
{
    MIPCMD_3DM_EVENTSUPPORT_QUERY_TRIGGER_TYPES = 1,  ///<  Query the supported trigger types and max count for each.
    MIPCMD_3DM_EVENTSUPPORT_QUERY_ACTION_TYPES  = 2,  ///<  Query the supported action types and max count for each.
};
size_t insert_MipCmd_3Dm_EventSupport_Query(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventSupport_Query self);
size_t extract_MipCmd_3Dm_EventSupport_Query(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventSupport_Query* self);

struct MipCmd_3Dm_EventSupport
{
    enum MipCmd_3Dm_EventSupport_Query                query;
};
size_t insert_MipCmd_3Dm_EventSupport(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventSupport* self);
size_t extract_MipCmd_3Dm_EventSupport(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventSupport* self);

struct MipCmd_3Dm_EventSupport_Info
{
    uint8_t                                           type;
    uint8_t                                           count;
};
size_t insert_MipCmd_3Dm_EventSupport_Info(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventSupport_Info* self);
size_t extract_MipCmd_3Dm_EventSupport_Info(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventSupport_Info* self);

struct MipCmd_3Dm_EventSupport_Response
{
    enum MipCmd_3Dm_EventSupport_Query                query;
    uint8_t                                           max_instances;
    uint8_t                                           num_entries;
    struct MipCmd_3Dm_EventSupport_Info               entries[126];
};
size_t insert_MipCmd_3Dm_EventSupport_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventSupport_Response* self);
size_t extract_MipCmd_3Dm_EventSupport_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventSupport_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_event_control  3Dm Event Control
/// Enables or disables event triggers.
/// 
/// Triggers can be disabled, enabled, and tested. While disabled, a trigger will
/// not evaluate its logic and effective behave like no trigger is configured.
/// A disabled trigger will not activate any actions. Triggers are disabled by default.
/// 
/// Use this command to enable (or disable) a trigger, or to place it into a test mode.
/// When in test mode, the trigger logic is disabled but the output is forced to
/// the active state, meaning that it will behave as if the trigger logic is satisfied
/// and any associated actions will execute.
///
///@{

enum MipCmd_3Dm_EventControl_Mode
{
    MIPCMD_3DM_EVENTCONTROL_MODE_DISABLED   = 0,  ///<  Trigger is disabled.
    MIPCMD_3DM_EVENTCONTROL_MODE_ENABLED    = 1,  ///<  Trigger is enabled and will work normally.
    MIPCMD_3DM_EVENTCONTROL_MODE_TEST       = 2,  ///<  Forces the trigger to the active state for testing purposes.
    MIPCMD_3DM_EVENTCONTROL_MODE_TEST_PULSE = 3,  ///<  Trigger is forced to the active state for one event cycle only. After the test cycle, the mode reverts to the previous state (either enabled or disabled).
};
size_t insert_MipCmd_3Dm_EventControl_Mode(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventControl_Mode self);
size_t extract_MipCmd_3Dm_EventControl_Mode(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventControl_Mode* self);

struct MipCmd_3Dm_EventControl
{
    enum MipFunctionSelector                          function;
    uint8_t                                           instance;
    enum MipCmd_3Dm_EventControl_Mode                 mode;
};
size_t insert_MipCmd_3Dm_EventControl(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventControl* self);
size_t extract_MipCmd_3Dm_EventControl(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventControl* self);

struct MipCmd_3Dm_EventControl_Response
{
    uint8_t                                           instance;
    enum MipCmd_3Dm_EventControl_Mode                 mode;
};
size_t insert_MipCmd_3Dm_EventControl_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventControl_Response* self);
size_t extract_MipCmd_3Dm_EventControl_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventControl_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_event_trigger_status  3Dm Event Trigger Status
///
///@{

struct MipCmd_3Dm_EventTriggerStatus
{
    uint8_t                                           requested_count;
    uint8_t                                           requested_instances[20];
};
size_t insert_MipCmd_3Dm_EventTriggerStatus(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTriggerStatus* self);
size_t extract_MipCmd_3Dm_EventTriggerStatus(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTriggerStatus* self);

enum MipCmd_3Dm_EventTriggerStatus_Status
{
    MIPCMD_3DM_EVENTTRIGGERSTATUS_STATUS_ACTIVE  = 0x01,
    MIPCMD_3DM_EVENTTRIGGERSTATUS_STATUS_ENABLED = 0x02,
    MIPCMD_3DM_EVENTTRIGGERSTATUS_STATUS_TEST    = 0x04,
};
size_t insert_MipCmd_3Dm_EventTriggerStatus_Status(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventTriggerStatus_Status self);
size_t extract_MipCmd_3Dm_EventTriggerStatus_Status(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventTriggerStatus_Status* self);

struct MipCmd_3Dm_EventTriggerStatus_Entry
{
    uint8_t                                           type;
    enum MipCmd_3Dm_EventTriggerStatus_Status         status;
};
size_t insert_MipCmd_3Dm_EventTriggerStatus_Entry(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTriggerStatus_Entry* self);
size_t extract_MipCmd_3Dm_EventTriggerStatus_Entry(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTriggerStatus_Entry* self);

struct MipCmd_3Dm_EventTriggerStatus_Response
{
    uint8_t                                           count;
    struct MipCmd_3Dm_EventTriggerStatus_Entry        triggers[20];
};
size_t insert_MipCmd_3Dm_EventTriggerStatus_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTriggerStatus_Response* self);
size_t extract_MipCmd_3Dm_EventTriggerStatus_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTriggerStatus_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_event_action_status  3Dm Event Action Status
///
///@{

struct MipCmd_3Dm_EventActionStatus
{
    uint8_t                                           requested_count;
    uint8_t                                           requested_instances[20];
};
size_t insert_MipCmd_3Dm_EventActionStatus(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventActionStatus* self);
size_t extract_MipCmd_3Dm_EventActionStatus(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventActionStatus* self);

struct MipCmd_3Dm_EventActionStatus_Entry
{
    uint8_t                                           action_type;
    uint8_t                                           trigger_id;
};
size_t insert_MipCmd_3Dm_EventActionStatus_Entry(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventActionStatus_Entry* self);
size_t extract_MipCmd_3Dm_EventActionStatus_Entry(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventActionStatus_Entry* self);

struct MipCmd_3Dm_EventActionStatus_Response
{
    uint8_t                                           count;
    struct MipCmd_3Dm_EventActionStatus_Entry         actions[20];
};
size_t insert_MipCmd_3Dm_EventActionStatus_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventActionStatus_Response* self);
size_t extract_MipCmd_3Dm_EventActionStatus_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventActionStatus_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_event_trigger  3Dm Event Trigger
/// Configures various types of event triggers.
///
///@{

enum MipCmd_3Dm_EventTrigger_Type
{
    MIPCMD_3DM_EVENTTRIGGER_TYPE_NONE        = 0,  ///<  No trigger selected. The state will always be inactive.
    MIPCMD_3DM_EVENTTRIGGER_TYPE_GPIO        = 1,  ///<  Trigger based on the state of a GPIO pin. See GpioParams.
    MIPCMD_3DM_EVENTTRIGGER_TYPE_THRESHOLD   = 2,  ///<  Compare a data quantity against a high and low threshold. See ThresholdParams.
    MIPCMD_3DM_EVENTTRIGGER_TYPE_COMBINATION = 3,  ///<  Logical combination of two or more triggers. See CombinationParams.
};
size_t insert_MipCmd_3Dm_EventTrigger_Type(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventTrigger_Type self);
size_t extract_MipCmd_3Dm_EventTrigger_Type(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventTrigger_Type* self);

enum MipCmd_3Dm_EventTrigger_Gpioparams_Mode
{
    MIPCMD_3DM_EVENTTRIGGER_GPIOPARAMS_MODE_DISABLED   = 0,  ///<  The pin will have no effect and the trigger will never activate.
    MIPCMD_3DM_EVENTTRIGGER_GPIOPARAMS_MODE_WHILE_HIGH = 1,  ///<  The trigger will be active while the pin is high.
    MIPCMD_3DM_EVENTTRIGGER_GPIOPARAMS_MODE_WHILE_LOW  = 2,  ///<  The trigger will be active while the pin is low.
    MIPCMD_3DM_EVENTTRIGGER_GPIOPARAMS_MODE_EDGE       = 4,  ///<  Use if the pin is configured for timestamping via the 3DM Gpio Configuration command (0x0C41).
};
size_t insert_MipCmd_3Dm_EventTrigger_Gpioparams_Mode(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventTrigger_Gpioparams_Mode self);
size_t extract_MipCmd_3Dm_EventTrigger_Gpioparams_Mode(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventTrigger_Gpioparams_Mode* self);

struct MipCmd_3Dm_EventTrigger_Gpioparams
{
    uint8_t                                           pin;
    enum MipCmd_3Dm_EventTrigger_Gpioparams_Mode      mode;
};
size_t insert_MipCmd_3Dm_EventTrigger_Gpioparams(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTrigger_Gpioparams* self);
size_t extract_MipCmd_3Dm_EventTrigger_Gpioparams(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTrigger_Gpioparams* self);

enum MipCmd_3Dm_EventTrigger_Thresholdparams_Type
{
    MIPCMD_3DM_EVENTTRIGGER_THRESHOLDPARAMS_TYPE_WINDOW   = 1,  ///<  Window comparison. Trigger is active if low_thres &lt;= value &lt;= high_thres. If the thresholds are reversed, the trigger is active when value &lt; high_thres or value &gt; low_thres.
    MIPCMD_3DM_EVENTTRIGGER_THRESHOLDPARAMS_TYPE_INTERVAL = 2,  ///<  Trigger at evenly-spaced intervals. Normally used with time fields to trigger periodically. Trigger is active when (value % interval) &lt;= int_thres. If the thresholds are reversed (high_thres &lt; low_thres) then the trigger is active when (value % low_thres) &gt; high_thres.
};
size_t insert_MipCmd_3Dm_EventTrigger_Thresholdparams_Type(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventTrigger_Thresholdparams_Type self);
size_t extract_MipCmd_3Dm_EventTrigger_Thresholdparams_Type(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventTrigger_Thresholdparams_Type* self);

struct MipCmd_3Dm_EventTrigger_Thresholdparams
{
    uint8_t                                           desc_set;
    uint8_t                                           field_desc;
    uint8_t                                           param_id;
    enum MipCmd_3Dm_EventTrigger_Thresholdparams_Type type;
    union
    {
        double                                            low_thres;
        double                                            int_thres;
    };
    union
    {
        double                                            high_thres;
        double                                            interval;
    };
};
size_t insert_MipCmd_3Dm_EventTrigger_Thresholdparams(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTrigger_Thresholdparams* self);
size_t extract_MipCmd_3Dm_EventTrigger_Thresholdparams(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTrigger_Thresholdparams* self);

struct MipCmd_3Dm_EventTrigger_Combinationparams
{
    uint16_t                                          logic_table;
    uint8_t                                           input_triggers[4];
};
size_t insert_MipCmd_3Dm_EventTrigger_Combinationparams(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTrigger_Combinationparams* self);
size_t extract_MipCmd_3Dm_EventTrigger_Combinationparams(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTrigger_Combinationparams* self);

struct MipCmd_3Dm_EventTrigger
{
    enum MipFunctionSelector                          function;
    uint8_t                                           instance;
    enum MipCmd_3Dm_EventTrigger_Type                 type;
    union
    {
        struct MipCmd_3Dm_EventTrigger_Gpioparams         gpio;
        struct MipCmd_3Dm_EventTrigger_Thresholdparams    threshold;
        struct MipCmd_3Dm_EventTrigger_Combinationparams  combination;
    };
};
size_t insert_MipCmd_3Dm_EventTrigger(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTrigger* self);
size_t extract_MipCmd_3Dm_EventTrigger(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTrigger* self);

struct MipCmd_3Dm_EventTrigger_Response
{
    uint8_t                                           instance;
    enum MipCmd_3Dm_EventTrigger_Type                 type;
    union
    {
        struct MipCmd_3Dm_EventTrigger_Gpioparams         gpio;
        struct MipCmd_3Dm_EventTrigger_Thresholdparams    threshold;
        struct MipCmd_3Dm_EventTrigger_Combinationparams  combination;
    };
};
size_t insert_MipCmd_3Dm_EventTrigger_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTrigger_Response* self);
size_t extract_MipCmd_3Dm_EventTrigger_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTrigger_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_event_action  3Dm Event Action
/// Configures various types of event actions.
///
///@{

enum MipCmd_3Dm_EventAction_Type
{
    MIPCMD_3DM_EVENTACTION_TYPE_NONE    = 0,  ///<  No action. Parameters should be empty.
    MIPCMD_3DM_EVENTACTION_TYPE_GPIO    = 1,  ///<  Control the state of a GPIO pin. See GpioParameters.
    MIPCMD_3DM_EVENTACTION_TYPE_MESSAGE = 2,  ///<  Output a data packet. See MessageParameters.
};
size_t insert_MipCmd_3Dm_EventAction_Type(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventAction_Type self);
size_t extract_MipCmd_3Dm_EventAction_Type(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventAction_Type* self);

enum MipCmd_3Dm_EventAction_Gpioparams_Mode
{
    MIPCMD_3DM_EVENTACTION_GPIOPARAMS_MODE_DISABLED     = 0,  ///<  Pin state will not be changed.
    MIPCMD_3DM_EVENTACTION_GPIOPARAMS_MODE_ACTIVE_HIGH  = 1,  ///<  Pin will be set high when the trigger is active and low otherwise.
    MIPCMD_3DM_EVENTACTION_GPIOPARAMS_MODE_ACTIVE_LOW   = 2,  ///<  Pin will be set low when the trigger is active and high otherwise.
    MIPCMD_3DM_EVENTACTION_GPIOPARAMS_MODE_ONESHOT_HIGH = 5,  ///<  Pin will be set high each time the trigger activates. It will not be set low.
    MIPCMD_3DM_EVENTACTION_GPIOPARAMS_MODE_ONESHOT_LOW  = 6,  ///<  Pin will be set low each time the trigger activates. It will not be set high.
    MIPCMD_3DM_EVENTACTION_GPIOPARAMS_MODE_TOGGLE       = 7,  ///<  Pin will change to the opposite state each time the trigger activates.
};
size_t insert_MipCmd_3Dm_EventAction_Gpioparams_Mode(uint8_t* buffer, size_t bufferSize, size_t offset, const enum MipCmd_3Dm_EventAction_Gpioparams_Mode self);
size_t extract_MipCmd_3Dm_EventAction_Gpioparams_Mode(const uint8_t* buffer, size_t bufferSize, size_t offset, enum MipCmd_3Dm_EventAction_Gpioparams_Mode* self);

struct MipCmd_3Dm_EventAction_Gpioparams
{
    uint8_t                                           pin;
    enum MipCmd_3Dm_EventAction_Gpioparams_Mode       mode;
};
size_t insert_MipCmd_3Dm_EventAction_Gpioparams(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventAction_Gpioparams* self);
size_t extract_MipCmd_3Dm_EventAction_Gpioparams(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventAction_Gpioparams* self);

struct MipCmd_3Dm_EventAction_Messageparams
{
    uint8_t                                           desc_set;
    uint16_t                                          decimation;
    uint8_t                                           num_fields;
    uint8_t                                           descriptors[20];
};
size_t insert_MipCmd_3Dm_EventAction_Messageparams(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventAction_Messageparams* self);
size_t extract_MipCmd_3Dm_EventAction_Messageparams(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventAction_Messageparams* self);

struct MipCmd_3Dm_EventAction
{
    enum MipFunctionSelector                          function;
    uint8_t                                           instance;
    uint8_t                                           trigger;
    enum MipCmd_3Dm_EventAction_Type                  type;
    union
    {
        struct MipCmd_3Dm_EventAction_Gpioparams          gpio;
        struct MipCmd_3Dm_EventAction_Messageparams       message;
    };
};
size_t insert_MipCmd_3Dm_EventAction(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventAction* self);
size_t extract_MipCmd_3Dm_EventAction(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventAction* self);

struct MipCmd_3Dm_EventAction_Response
{
    uint8_t                                           instance;
    uint8_t                                           trigger;
    enum MipCmd_3Dm_EventAction_Type                  type;
    union
    {
        struct MipCmd_3Dm_EventAction_Gpioparams          gpio;
        struct MipCmd_3Dm_EventAction_Messageparams       message;
    };
};
size_t insert_MipCmd_3Dm_EventAction_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventAction_Response* self);
size_t extract_MipCmd_3Dm_EventAction_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventAction_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_accel_bias  3Dm Accel Bias
/// Configures the user specified accelerometer bias
/// 
/// The user specified bias is subtracted from the calibrated accelerometer output.  Value is input in the sensor frame.
///
///@{

struct MipCmd_3Dm_AccelBias
{
    enum MipFunctionSelector                          function;
    float                                             bias[3];
};
size_t insert_MipCmd_3Dm_AccelBias(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AccelBias* self);
size_t extract_MipCmd_3Dm_AccelBias(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AccelBias* self);

struct MipCmd_3Dm_AccelBias_Response
{
    float                                             bias[3];
};
size_t insert_MipCmd_3Dm_AccelBias_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AccelBias_Response* self);
size_t extract_MipCmd_3Dm_AccelBias_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AccelBias_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_gyro_bias  3Dm Gyro Bias
/// Configures the user specified gyroscope bias
/// 
/// The user specified bias is subtracted from the calibrated angular rate output.  Value is input in the sensor frame.
///
///@{

struct MipCmd_3Dm_GyroBias
{
    enum MipFunctionSelector                          function;
    float                                             bias[3];
};
size_t insert_MipCmd_3Dm_GyroBias(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GyroBias* self);
size_t extract_MipCmd_3Dm_GyroBias(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GyroBias* self);

struct MipCmd_3Dm_GyroBias_Response
{
    float                                             bias[3];
};
size_t insert_MipCmd_3Dm_GyroBias_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GyroBias_Response* self);
size_t extract_MipCmd_3Dm_GyroBias_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GyroBias_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_capture_gyro_bias  3Dm Capture Gyro Bias
/// Samples gyro for a specified time range and writes the averaged result to the Gyro Bias vector in RAM
/// 
/// The device will average the gyro output for the duration of "averaging_time_ms." To store the resulting vector
/// in non-volatile memory, use the Set Gyro Bias command.
/// IMPORTANT: The device must be stationary and experiencing minimum vibration for the duration of "averaging_time_ms"
/// Averaging Time range: 1000 to 30,000
///
///@{

struct MipCmd_3Dm_CaptureGyroBias
{
    uint16_t                                          averaging_time_ms;
};
size_t insert_MipCmd_3Dm_CaptureGyroBias(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CaptureGyroBias* self);
size_t extract_MipCmd_3Dm_CaptureGyroBias(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CaptureGyroBias* self);

struct MipCmd_3Dm_CaptureGyroBias_Response
{
    float                                             bias[3];
};
size_t insert_MipCmd_3Dm_CaptureGyroBias_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CaptureGyroBias_Response* self);
size_t extract_MipCmd_3Dm_CaptureGyroBias_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CaptureGyroBias_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_mag_hard_iron_offset  3Dm Mag Hard Iron Offset
/// Configure the user specified magnetometer hard iron offset vector
/// 
/// The values for this offset are determined empirically by external software algorithms
/// based on calibration data taken after the device is installed in its application. These values
/// can be obtained and set by using the LORD "MIP Iron Calibration" application.
/// Alternatively, on some systems, the auto-mag calibration feature may be used to capture these values in-run.
/// The offset is applied to the scaled magnetometer vector prior to output.
///
///@{

struct MipCmd_3Dm_MagHardIronOffset
{
    enum MipFunctionSelector                          function;
    float                                             offset[3];
};
size_t insert_MipCmd_3Dm_MagHardIronOffset(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagHardIronOffset* self);
size_t extract_MipCmd_3Dm_MagHardIronOffset(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagHardIronOffset* self);

struct MipCmd_3Dm_MagHardIronOffset_Response
{
    float                                             offset[3];
};
size_t insert_MipCmd_3Dm_MagHardIronOffset_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagHardIronOffset_Response* self);
size_t extract_MipCmd_3Dm_MagHardIronOffset_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagHardIronOffset_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_mag_soft_iron_matrix  3Dm Mag Soft Iron Matrix
/// Configure the user specified magnetometer soft iron offset matrix
/// 
/// The values for this matrix are determined empirically by external software algorithms
/// based on calibration data taken after the device is installed in its application. These values
/// can be obtained and set by using the LORD "MIP Iron Calibration" application.
/// Alternatively, on some systems, the auto-mag calibration feature may be used to capture these values in-run.
/// The matrix is applied to the scaled magnetometer vector prior to output.
/// 
/// The matrix is in row major order:
/// EQSTART M = \begin{bmatrix} 0 &amp; 1 &amp; 2 \\ 3 &amp; 4 &amp; 5 \\ 6 &amp; 7 &amp; 8 \end{bmatrix} EQEND
/// 
///
///@{

struct MipCmd_3Dm_MagSoftIronMatrix
{
    enum MipFunctionSelector                          function;
    float                                             offset[9];
};
size_t insert_MipCmd_3Dm_MagSoftIronMatrix(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagSoftIronMatrix* self);
size_t extract_MipCmd_3Dm_MagSoftIronMatrix(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagSoftIronMatrix* self);

struct MipCmd_3Dm_MagSoftIronMatrix_Response
{
    float                                             offset[9];
};
size_t insert_MipCmd_3Dm_MagSoftIronMatrix_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagSoftIronMatrix_Response* self);
size_t extract_MipCmd_3Dm_MagSoftIronMatrix_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagSoftIronMatrix_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_sensor_2_vehicle_transform_euler  3Dm Sensor 2 Vehicle Transform Euler
/// Sets the sensor-to-vehicle frame transformation using Yaw, Pitch, Roll Euler angles.
/// These are the Yaw, Pitch, and Roll mounting angles of the sensor with respect to vehicle frame of reference,
/// and describe the transformation of vectors from the sensor body frame to the vehicle frame.<br/>
/// Note: This is the transformation, the inverse of the rotation defined in our legacy products.<br/>
/// The transformation may be stored in the device as a matrix or quaternion.  When Euler angles are read back from the device, they may not
/// be exactly equal to the Euler angles used to set the transformation, but they are functionally equivalent, such that they result in the same transformation.<br/>
/// <br/><br/>
/// This transformation to the vehicle frame will be applied to the following output quantities:<br/><br/>
/// IMU:<br/>
/// Scaled Acceleration<br/>
/// Scaled Gyro<br/>
/// Scaled Magnetometer<br/>
/// Delta Theta<br/>
/// Delta Velocity<br/>
/// Complementary Filter Orientation<br/>
/// <br/><br/>
/// Estimation Filter:<br/>
/// Estimated Orientation, Quaternion<br/>
/// Estimated Orientation, Matrix<br/>
/// Estimated Orientation, Euler Angles<br/>
/// Estimated Linear Acceleration<br/>
/// Estimated Angular Rate<br/>
/// Estimated Gravity Vector<br/>
/// <br/>
/// Changing this setting will force all low-pass filters, the complementary filter, and the estimation filter to reset.
///
///@{

struct MipCmd_3Dm_Sensor2VehicleTransformEuler
{
    enum MipFunctionSelector                          function;
    float                                             roll;
    float                                             pitch;
    float                                             yaw;
};
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformEuler(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformEuler* self);
size_t extract_MipCmd_3Dm_Sensor2VehicleTransformEuler(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformEuler* self);

struct MipCmd_3Dm_Sensor2VehicleTransformEuler_Response
{
    float                                             roll;
    float                                             pitch;
    float                                             yaw;
};
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformEuler_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformEuler_Response* self);
size_t extract_MipCmd_3Dm_Sensor2VehicleTransformEuler_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformEuler_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_sensor_2_vehicle_transform_quaternion  3Dm Sensor 2 Vehicle Transform Quaternion
/// Set the sensor to vehicle frame transformation using unit length quaternion.
/// 
/// Note: This is the transformation, the inverse of the rotation.
/// 
/// This quaternion describes the transformation of vectors from the sensor body frame to the vehicle frame of reference, and satisfies the following relationship:<br/>
/// 
/// EQSTART p^{veh} = q^{-1} p^{sen} q EQEND<br/>
/// 
/// Where:<br/>
/// EQSTART q = (q_w, q_x, q_y, q_z) EQEND is the quaternion desrcribing the transformation. <br/>
/// EQSTART p^{sen} = (0, v^{sen}_x, v^{sen}_y, v^{sen}_z) EQEND and EQSTART v^{sen} EQEND is a 3-element vector expressed in the sensor body frame.<br/>
/// EQSTART p^{veh} = (0, v^{veh}_x, v^{veh}_y, v^{veh}_z) EQEND and EQSTART v^{veh} EQEND is a 3-element vector expressed in the vehicle frame.<br/>
/// 
/// The transformation may be stored in the device as a matrix or a quaternion.  When the quaternion is read back from the device, it may not
/// be exactly equal to the quaternion used to set the transformation, but it is functionally equivalent.<br/>
/// <br/><br/>
/// This transformation affects the following output quantities:<br/><br/>
/// IMU:<br/>
/// Scaled Acceleration<br/>
/// Scaled Gyro<br/>
/// Scaled Magnetometer<br/>
/// Delta Theta<br/>
/// Delta Velocity<br/>
/// <br/><br/>
/// Estimation Filter:<br/>
/// Estimated Orientation, Quaternion<br/>
/// Estimated Orientation, Matrix<br/>
/// Estimated Orientation, Euler Angles<br/>
/// Estimated Linear Acceleration<br/>
/// Estimated Angular Rate<br/>
/// Estimated Gravity Vector<br/>
/// <br/>
/// Changing this setting will force all low-pass filters, the complementary filter, and the estimation filter to reset.
///
///@{

struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion
{
    enum MipFunctionSelector                          function;
    float                                             q[4];
};
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformQuaternion(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion* self);
size_t extract_MipCmd_3Dm_Sensor2VehicleTransformQuaternion(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion* self);

struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response
{
    float                                             q[4];
};
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response* self);
size_t extract_MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_sensor_2_vehicle_transform_dcm  3Dm Sensor 2 Vehicle Transform Dcm
/// Set the sensor to vehicle frame transformation using a using a 3 x 3 direction cosine matrix EQSTART M_{ned}^{veh} EQEND, stored in row-major order in a 9-element array.
/// 
/// These angles define the transformation of vectors from the sensor body frame to the fixed vehicle frame, according to:<br/>
/// EQSTART v^{veh} = M_{sen}^{veh} v^{sen} EQEND<br/>
/// 
/// Where:<br/>
/// 
/// EQSTART v^{sen} EQEND is a 3-element vector expressed in the sensor body frame. <br/>
/// EQSTART v^{veh} EQEND is the same 3-element vector expressed in the vehicle frame.  <br/>
/// <br/>
/// The matrix elements are stored is row-major order: EQSTART M_{sen}^{veh} = \begin{bmatrix} M_{11}, M_{12}, M_{13}, M_{21}, M_{22}, M_{23}, M_{31}, M_{32}, M_{33} \end{bmatrix} EQEND
/// The transformation may be stored in the device as a matrix or a quaternion. When EQSTART M_{sen}^{veh} EQEND is read back from the device, it may not
/// be exactly equal to array used to set the transformation, but it is functionally equivalent.<br/>
/// <br/><br/>
/// This transformation affects the following output quantities:<br/><br/>
/// IMU:<br/>
/// Scaled Acceleration<br/>
/// Scaled Gyro<br/>
/// Scaled Magnetometer<br/>
/// Delta Theta<br/>
/// Delta Velocity<br/>
/// <br/><br/>
/// Estimation Filter:<br/>
/// Estimated Orientation, Quaternion<br/>
/// Estimated Orientation, Matrix<br/>
/// Estimated Orientation, Euler Angles<br/>
/// Estimated Linear Acceleration<br/>
/// Estimated Angular Rate<br/>
/// Estimated Gravity Vector<br/>
/// <br/>
/// Changing this setting will force all low-pass filters, the complementary filter, and the estimation filter to reset.
///
///@{

struct MipCmd_3Dm_Sensor2VehicleTransformDcm
{
    enum MipFunctionSelector                          function;
    float                                             dcm[9];
};
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformDcm(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformDcm* self);
size_t extract_MipCmd_3Dm_Sensor2VehicleTransformDcm(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformDcm* self);

struct MipCmd_3Dm_Sensor2VehicleTransformDcm_Response
{
    float                                             dcm[9];
};
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformDcm_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformDcm_Response* self);
size_t extract_MipCmd_3Dm_Sensor2VehicleTransformDcm_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformDcm_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_complementary_filter  3Dm Complementary Filter
/// Configure the settings for the complementary filter which produces the following (0x80) descriptor set values: attitude matrix (0x80,09), quaternion (0x80,0A), and  Euler angle (0x80,0C) outputs.
/// 
/// The filter can be configured to correct for pitch and roll using the accelerometer (with the assumption that linear acceleration is minimal),
/// and to correct for heading using the magnetomer (with the assumption that the local magnetic field is dominated by the Earth's own magnetic field).
/// Pitch/roll and heading corrections each have their own configurable time constants, with a valid range of 1-1000 seconds. The default time constant is 10 seconds.
///
///@{

struct MipCmd_3Dm_ComplementaryFilter
{
    enum MipFunctionSelector                          function;
    bool                                              pitch_roll_enable;
    bool                                              heading_enable;
    float                                             pitch_roll_time_constant;
    float                                             heading_time_constant;
};
size_t insert_MipCmd_3Dm_ComplementaryFilter(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ComplementaryFilter* self);
size_t extract_MipCmd_3Dm_ComplementaryFilter(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ComplementaryFilter* self);

struct MipCmd_3Dm_ComplementaryFilter_Response
{
    bool                                              pitch_roll_enable;
    bool                                              heading_enable;
    float                                             pitch_roll_time_constant;
    float                                             heading_time_constant;
};
size_t insert_MipCmd_3Dm_ComplementaryFilter_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ComplementaryFilter_Response* self);
size_t extract_MipCmd_3Dm_ComplementaryFilter_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ComplementaryFilter_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_sensor_range  3Dm Sensor Range
/// Changes the IMU sensor gain.
/// 
/// This allows you to optimize the range to get the best accuracy and performance
/// while minimizing overrange events.
/// 
/// Use the 3DM Get Calibrated Sensor Ranges (0x0C,0x53) command to determine
/// the appropriate setting value for your application. Using values other than
/// those specified may result in a NACK or inaccurate measurement data.
///
///@{

struct MipCmd_3Dm_SensorRange
{
    enum MipFunctionSelector                          function;
    enum MipSensorRangeType                           sensor;
    uint8_t                                           setting;
};
size_t insert_MipCmd_3Dm_SensorRange(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_SensorRange* self);
size_t extract_MipCmd_3Dm_SensorRange(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_SensorRange* self);

struct MipCmd_3Dm_SensorRange_Response
{
    enum MipSensorRangeType                           sensor;
    uint8_t                                           setting;
};
size_t insert_MipCmd_3Dm_SensorRange_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_SensorRange_Response* self);
size_t extract_MipCmd_3Dm_SensorRange_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_SensorRange_Response* self);

///@}
///
////////////////////////////////////////////////////////////////////////////////
///@defgroup mip_cmd_3dm_calibrated_sensor_ranges  3Dm Calibrated Sensor Ranges
/// Returns the supported sensor ranges which may be used with the 3DM Sensor Range (0x0C,0x52) command.
/// 
/// The response includes an array of (u8, float) pairs which map each allowed setting
/// to the corresponding maximum range in physical units. See SensorRangeType for units.
///
///@{

struct MipCmd_3Dm_CalibratedSensorRanges
{
    enum MipSensorRangeType                           sensor;
};
size_t insert_MipCmd_3Dm_CalibratedSensorRanges(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CalibratedSensorRanges* self);
size_t extract_MipCmd_3Dm_CalibratedSensorRanges(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CalibratedSensorRanges* self);

struct MipCmd_3Dm_CalibratedSensorRanges_Entry
{
    uint8_t                                           setting;
    float                                             range;
};
size_t insert_MipCmd_3Dm_CalibratedSensorRanges_Entry(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CalibratedSensorRanges_Entry* self);
size_t extract_MipCmd_3Dm_CalibratedSensorRanges_Entry(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CalibratedSensorRanges_Entry* self);

struct MipCmd_3Dm_CalibratedSensorRanges_Response
{
    enum MipSensorRangeType                           sensor;
    uint8_t                                           num_ranges;
    struct MipCmd_3Dm_CalibratedSensorRanges_Entry    ranges[50];
};
size_t insert_MipCmd_3Dm_CalibratedSensorRanges_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CalibratedSensorRanges_Response* self);
size_t extract_MipCmd_3Dm_CalibratedSensorRanges_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CalibratedSensorRanges_Response* self);

///@}
///

///@}
///@}
///
////////////////////////////////////////////////////////////////////////////////