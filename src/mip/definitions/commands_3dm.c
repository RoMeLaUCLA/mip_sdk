
#include "commands_3dm.h"

#include "utils/serialization.h"

#include <assert.h>



////////////////////////////////////////////////////////////////////////////////
// Shared Type Definitions
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
// Mip Fields
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_PollImuMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollImuMessage* self)
{
    offset = insert_bool(buffer, bufferSize, offset, self->suppress_ack);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_PollImuMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollImuMessage* self)
{
    offset = extract_bool(buffer, bufferSize, offset, &self->suppress_ack);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_PollGnssMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollGnssMessage* self)
{
    offset = insert_bool(buffer, bufferSize, offset, self->suppress_ack);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_PollGnssMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollGnssMessage* self)
{
    offset = extract_bool(buffer, bufferSize, offset, &self->suppress_ack);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_PollFilterMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollFilterMessage* self)
{
    offset = insert_bool(buffer, bufferSize, offset, self->suppress_ack);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_PollFilterMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollFilterMessage* self)
{
    offset = extract_bool(buffer, bufferSize, offset, &self->suppress_ack);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_PollNmeaMessage(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollNmeaMessage* self)
{
    offset = insert_bool(buffer, bufferSize, offset, self->suppress_ack);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_PollNmeaMessage(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollNmeaMessage* self)
{
    offset = extract_bool(buffer, bufferSize, offset, &self->suppress_ack);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 83);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_ImuMessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuMessageFormat* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_ImuMessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuMessageFormat* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_ImuMessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuMessageFormat_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_ImuMessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuMessageFormat_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GpsMessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsMessageFormat* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GpsMessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsMessageFormat* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_GpsMessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsMessageFormat_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GpsMessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsMessageFormat_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_FilterMessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterMessageFormat* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_FilterMessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterMessageFormat* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_FilterMessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterMessageFormat_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_FilterMessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterMessageFormat_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_ImuGetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuGetBaseRate* self)
{
    return offset;
}

size_t extract_MipCmd_3Dm_ImuGetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuGetBaseRate* self)
{
    return offset;
}


size_t insert_MipCmd_3Dm_ImuGetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ImuGetBaseRate_Response* self)
{
    offset = insert_u16(buffer, bufferSize, offset, self->rate);
    
    return offset;
}

size_t extract_MipCmd_3Dm_ImuGetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ImuGetBaseRate_Response* self)
{
    offset = extract_u16(buffer, bufferSize, offset, &self->rate);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GpsGetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsGetBaseRate* self)
{
    return offset;
}

size_t extract_MipCmd_3Dm_GpsGetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsGetBaseRate* self)
{
    return offset;
}


size_t insert_MipCmd_3Dm_GpsGetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpsGetBaseRate_Response* self)
{
    offset = insert_u16(buffer, bufferSize, offset, self->rate);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GpsGetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpsGetBaseRate_Response* self)
{
    offset = extract_u16(buffer, bufferSize, offset, &self->rate);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_FilterGetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterGetBaseRate* self)
{
    return offset;
}

size_t extract_MipCmd_3Dm_FilterGetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterGetBaseRate* self)
{
    return offset;
}


size_t insert_MipCmd_3Dm_FilterGetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FilterGetBaseRate_Response* self)
{
    offset = insert_u16(buffer, bufferSize, offset, self->rate);
    
    return offset;
}

size_t extract_MipCmd_3Dm_FilterGetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FilterGetBaseRate_Response* self)
{
    offset = extract_u16(buffer, bufferSize, offset, &self->rate);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_PollData(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PollData* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->desc_set);
    offset = insert_bool(buffer, bufferSize, offset, self->suppress_ack);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_u8(buffer, bufferSize, offset, self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_PollData(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PollData* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->desc_set);
    offset = extract_bool(buffer, bufferSize, offset, &self->suppress_ack);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_u8(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GetBaseRate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GetBaseRate* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->desc_set);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GetBaseRate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GetBaseRate* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->desc_set);
    
    return offset;
}


size_t insert_MipCmd_3Dm_GetBaseRate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GetBaseRate_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->desc_set);
    offset = insert_u16(buffer, bufferSize, offset, self->rate);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GetBaseRate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GetBaseRate_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->desc_set);
    offset = extract_u16(buffer, bufferSize, offset, &self->rate);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_MessageFormat(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MessageFormat* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->desc_set);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_MessageFormat(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MessageFormat* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->desc_set);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_MessageFormat_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MessageFormat_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->desc_set);
    offset = insert_u8(buffer, bufferSize, offset, self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = insert_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_MessageFormat_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MessageFormat_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->desc_set);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_descriptors);
    
    assert(self->num_descriptors <= 82);
    for(unsigned int i=0; i < self->num_descriptors; i++)
        offset = extract_MipDescriptorRate(buffer, bufferSize, offset, &self->descriptors[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_DeviceSettings(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_DeviceSettings* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    
    return offset;
}

size_t extract_MipCmd_3Dm_DeviceSettings(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_DeviceSettings* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_UartBaudrate(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_UartBaudrate* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u32(buffer, bufferSize, offset, self->baud);
    
    return offset;
}

size_t extract_MipCmd_3Dm_UartBaudrate(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_UartBaudrate* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u32(buffer, bufferSize, offset, &self->baud);
    
    return offset;
}


size_t insert_MipCmd_3Dm_UartBaudrate_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_UartBaudrate_Response* self)
{
    offset = insert_u32(buffer, bufferSize, offset, self->baud);
    
    return offset;
}

size_t extract_MipCmd_3Dm_UartBaudrate_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_UartBaudrate_Response* self)
{
    offset = extract_u32(buffer, bufferSize, offset, &self->baud);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_FactoryStreaming(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_FactoryStreaming* self)
{
    offset = insert_MipCmd_3Dm_FactoryStreaming_Action(buffer, bufferSize, offset, self->action);
    offset = insert_u8(buffer, bufferSize, offset, self->reserved);
    
    return offset;
}

size_t extract_MipCmd_3Dm_FactoryStreaming(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_FactoryStreaming* self)
{
    offset = extract_MipCmd_3Dm_FactoryStreaming_Action(buffer, bufferSize, offset, &self->action);
    offset = extract_u8(buffer, bufferSize, offset, &self->reserved);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_DatastreamControl(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_DatastreamControl* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->desc_set);
    offset = insert_bool(buffer, bufferSize, offset, self->enable);
    
    return offset;
}

size_t extract_MipCmd_3Dm_DatastreamControl(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_DatastreamControl* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->desc_set);
    offset = extract_bool(buffer, bufferSize, offset, &self->enable);
    
    return offset;
}


size_t insert_MipCmd_3Dm_DatastreamControl_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_DatastreamControl_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->desc_set);
    offset = insert_bool(buffer, bufferSize, offset, self->enabled);
    
    return offset;
}

size_t extract_MipCmd_3Dm_DatastreamControl_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_DatastreamControl_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->desc_set);
    offset = extract_bool(buffer, bufferSize, offset, &self->enabled);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GnssSbasSettings(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssSbasSettings* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->enable_sbas);
    offset = insert_MipCmd_3Dm_GnssSbasSettings_Sbasoptions(buffer, bufferSize, offset, self->sbas_options);
    offset = insert_u8(buffer, bufferSize, offset, self->num_included_prns);
    
    assert(self->num_included_prns <= 39);
    for(unsigned int i=0; i < self->num_included_prns; i++)
        offset = insert_u16(buffer, bufferSize, offset, self->included_prns[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GnssSbasSettings(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssSbasSettings* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->enable_sbas);
    offset = extract_MipCmd_3Dm_GnssSbasSettings_Sbasoptions(buffer, bufferSize, offset, &self->sbas_options);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_included_prns);
    
    assert(self->num_included_prns <= 39);
    for(unsigned int i=0; i < self->num_included_prns; i++)
        offset = extract_u16(buffer, bufferSize, offset, &self->included_prns[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_GnssSbasSettings_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssSbasSettings_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->enable_sbas);
    offset = insert_MipCmd_3Dm_GnssSbasSettings_Sbasoptions(buffer, bufferSize, offset, self->sbas_options);
    offset = insert_u8(buffer, bufferSize, offset, self->num_included_prns);
    
    assert(self->num_included_prns <= 39);
    for(unsigned int i=0; i < self->num_included_prns; i++)
        offset = insert_u16(buffer, bufferSize, offset, self->included_prns[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GnssSbasSettings_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssSbasSettings_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->enable_sbas);
    offset = extract_MipCmd_3Dm_GnssSbasSettings_Sbasoptions(buffer, bufferSize, offset, &self->sbas_options);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_included_prns);
    
    assert(self->num_included_prns <= 39);
    for(unsigned int i=0; i < self->num_included_prns; i++)
        offset = extract_u16(buffer, bufferSize, offset, &self->included_prns[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GnssTimeAssistance(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssTimeAssistance* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_double(buffer, bufferSize, offset, self->tow);
    offset = insert_u16(buffer, bufferSize, offset, self->week_number);
    offset = insert_float(buffer, bufferSize, offset, self->accuracy);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GnssTimeAssistance(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssTimeAssistance* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_double(buffer, bufferSize, offset, &self->tow);
    offset = extract_u16(buffer, bufferSize, offset, &self->week_number);
    offset = extract_float(buffer, bufferSize, offset, &self->accuracy);
    
    return offset;
}


size_t insert_MipCmd_3Dm_GnssTimeAssistance_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GnssTimeAssistance_Response* self)
{
    offset = insert_double(buffer, bufferSize, offset, self->tow);
    offset = insert_u16(buffer, bufferSize, offset, self->week_number);
    offset = insert_float(buffer, bufferSize, offset, self->accuracy);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GnssTimeAssistance_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GnssTimeAssistance_Response* self)
{
    offset = extract_double(buffer, bufferSize, offset, &self->tow);
    offset = extract_u16(buffer, bufferSize, offset, &self->week_number);
    offset = extract_float(buffer, bufferSize, offset, &self->accuracy);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_AdvLowpassFilter(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AdvLowpassFilter* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->target_descriptor);
    offset = insert_bool(buffer, bufferSize, offset, self->enable);
    offset = insert_bool(buffer, bufferSize, offset, self->manual);
    offset = insert_u16(buffer, bufferSize, offset, self->frequency);
    offset = insert_u8(buffer, bufferSize, offset, self->reserved);
    
    return offset;
}

size_t extract_MipCmd_3Dm_AdvLowpassFilter(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AdvLowpassFilter* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->target_descriptor);
    offset = extract_bool(buffer, bufferSize, offset, &self->enable);
    offset = extract_bool(buffer, bufferSize, offset, &self->manual);
    offset = extract_u16(buffer, bufferSize, offset, &self->frequency);
    offset = extract_u8(buffer, bufferSize, offset, &self->reserved);
    
    return offset;
}


size_t insert_MipCmd_3Dm_AdvLowpassFilter_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AdvLowpassFilter_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->target_descriptor);
    offset = insert_bool(buffer, bufferSize, offset, self->enable);
    offset = insert_bool(buffer, bufferSize, offset, self->manual);
    offset = insert_u16(buffer, bufferSize, offset, self->frequency);
    offset = insert_u8(buffer, bufferSize, offset, self->reserved);
    
    return offset;
}

size_t extract_MipCmd_3Dm_AdvLowpassFilter_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AdvLowpassFilter_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->target_descriptor);
    offset = extract_bool(buffer, bufferSize, offset, &self->enable);
    offset = extract_bool(buffer, bufferSize, offset, &self->manual);
    offset = extract_u16(buffer, bufferSize, offset, &self->frequency);
    offset = extract_u8(buffer, bufferSize, offset, &self->reserved);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_PpsSource(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PpsSource* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_MipPpsSource(buffer, bufferSize, offset, self->source);
    
    return offset;
}

size_t extract_MipCmd_3Dm_PpsSource(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PpsSource* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_MipPpsSource(buffer, bufferSize, offset, &self->source);
    
    return offset;
}


size_t insert_MipCmd_3Dm_PpsSource_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_PpsSource_Response* self)
{
    offset = insert_MipPpsSource(buffer, bufferSize, offset, self->source);
    
    return offset;
}

size_t extract_MipCmd_3Dm_PpsSource_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_PpsSource_Response* self)
{
    offset = extract_MipPpsSource(buffer, bufferSize, offset, &self->source);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GpioConfig(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioConfig* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->pin);
    offset = insert_MipCmd_3Dm_GpioConfig_Feature(buffer, bufferSize, offset, self->feature);
    offset = insert_MipCmd_3Dm_GpioConfig_Behavior(buffer, bufferSize, offset, self->behavior);
    offset = insert_MipCmd_3Dm_GpioConfig_Pinmode(buffer, bufferSize, offset, self->pin_mode);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GpioConfig(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioConfig* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->pin);
    offset = extract_MipCmd_3Dm_GpioConfig_Feature(buffer, bufferSize, offset, &self->feature);
    offset = extract_MipCmd_3Dm_GpioConfig_Behavior(buffer, bufferSize, offset, &self->behavior);
    offset = extract_MipCmd_3Dm_GpioConfig_Pinmode(buffer, bufferSize, offset, &self->pin_mode);
    
    return offset;
}


size_t insert_MipCmd_3Dm_GpioConfig_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioConfig_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->pin);
    offset = insert_MipCmd_3Dm_GpioConfig_Feature(buffer, bufferSize, offset, self->feature);
    offset = insert_MipCmd_3Dm_GpioConfig_Behavior(buffer, bufferSize, offset, self->behavior);
    offset = insert_MipCmd_3Dm_GpioConfig_Pinmode(buffer, bufferSize, offset, self->pin_mode);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GpioConfig_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioConfig_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->pin);
    offset = extract_MipCmd_3Dm_GpioConfig_Feature(buffer, bufferSize, offset, &self->feature);
    offset = extract_MipCmd_3Dm_GpioConfig_Behavior(buffer, bufferSize, offset, &self->behavior);
    offset = extract_MipCmd_3Dm_GpioConfig_Pinmode(buffer, bufferSize, offset, &self->pin_mode);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GpioState(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioState* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->pin);
    offset = insert_bool(buffer, bufferSize, offset, self->state);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GpioState(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioState* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->pin);
    offset = extract_bool(buffer, bufferSize, offset, &self->state);
    
    return offset;
}


size_t insert_MipCmd_3Dm_GpioState_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GpioState_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->pin);
    offset = insert_bool(buffer, bufferSize, offset, self->state);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GpioState_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GpioState_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->pin);
    offset = extract_bool(buffer, bufferSize, offset, &self->state);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_Odometer(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Odometer* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_MipCmd_3Dm_Odometer_Mode(buffer, bufferSize, offset, self->mode);
    offset = insert_float(buffer, bufferSize, offset, self->scaling);
    offset = insert_float(buffer, bufferSize, offset, self->uncertainty);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Odometer(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Odometer* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_MipCmd_3Dm_Odometer_Mode(buffer, bufferSize, offset, &self->mode);
    offset = extract_float(buffer, bufferSize, offset, &self->scaling);
    offset = extract_float(buffer, bufferSize, offset, &self->uncertainty);
    
    return offset;
}


size_t insert_MipCmd_3Dm_Odometer_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Odometer_Response* self)
{
    offset = insert_MipCmd_3Dm_Odometer_Mode(buffer, bufferSize, offset, self->mode);
    offset = insert_float(buffer, bufferSize, offset, self->scaling);
    offset = insert_float(buffer, bufferSize, offset, self->uncertainty);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Odometer_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Odometer_Response* self)
{
    offset = extract_MipCmd_3Dm_Odometer_Mode(buffer, bufferSize, offset, &self->mode);
    offset = extract_float(buffer, bufferSize, offset, &self->scaling);
    offset = extract_float(buffer, bufferSize, offset, &self->uncertainty);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_EventSupport(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventSupport* self)
{
    offset = insert_MipCmd_3Dm_EventSupport_Query(buffer, bufferSize, offset, self->query);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventSupport(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventSupport* self)
{
    offset = extract_MipCmd_3Dm_EventSupport_Query(buffer, bufferSize, offset, &self->query);
    
    return offset;
}


size_t insert_MipCmd_3Dm_EventSupport_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventSupport_Response* self)
{
    offset = insert_MipCmd_3Dm_EventSupport_Query(buffer, bufferSize, offset, self->query);
    offset = insert_u8(buffer, bufferSize, offset, self->max_instances);
    offset = insert_u8(buffer, bufferSize, offset, self->num_entries);
    
    assert(self->num_entries <= 126);
    for(unsigned int i=0; i < self->num_entries; i++)
        offset = insert_MipCmd_3Dm_EventSupport_Info(buffer, bufferSize, offset, &self->entries[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventSupport_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventSupport_Response* self)
{
    offset = extract_MipCmd_3Dm_EventSupport_Query(buffer, bufferSize, offset, &self->query);
    offset = extract_u8(buffer, bufferSize, offset, &self->max_instances);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_entries);
    
    assert(self->num_entries <= 126);
    for(unsigned int i=0; i < self->num_entries; i++)
        offset = extract_MipCmd_3Dm_EventSupport_Info(buffer, bufferSize, offset, &self->entries[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_EventControl(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventControl* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->instance);
    offset = insert_MipCmd_3Dm_EventControl_Mode(buffer, bufferSize, offset, self->mode);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventControl(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventControl* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->instance);
    offset = extract_MipCmd_3Dm_EventControl_Mode(buffer, bufferSize, offset, &self->mode);
    
    return offset;
}


size_t insert_MipCmd_3Dm_EventControl_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventControl_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->instance);
    offset = insert_MipCmd_3Dm_EventControl_Mode(buffer, bufferSize, offset, self->mode);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventControl_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventControl_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->instance);
    offset = extract_MipCmd_3Dm_EventControl_Mode(buffer, bufferSize, offset, &self->mode);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_EventTriggerStatus(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTriggerStatus* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->requested_count);
    
    assert(self->requested_count <= 20);
    for(unsigned int i=0; i < self->requested_count; i++)
        offset = insert_u8(buffer, bufferSize, offset, self->requested_instances[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventTriggerStatus(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTriggerStatus* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->requested_count);
    
    assert(self->requested_count <= 20);
    for(unsigned int i=0; i < self->requested_count; i++)
        offset = extract_u8(buffer, bufferSize, offset, &self->requested_instances[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_EventTriggerStatus_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTriggerStatus_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->count);
    
    assert(self->count <= 20);
    for(unsigned int i=0; i < self->count; i++)
        offset = insert_MipCmd_3Dm_EventTriggerStatus_Entry(buffer, bufferSize, offset, &self->triggers[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventTriggerStatus_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTriggerStatus_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->count);
    
    assert(self->count <= 20);
    for(unsigned int i=0; i < self->count; i++)
        offset = extract_MipCmd_3Dm_EventTriggerStatus_Entry(buffer, bufferSize, offset, &self->triggers[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_EventActionStatus(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventActionStatus* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->requested_count);
    
    assert(self->requested_count <= 20);
    for(unsigned int i=0; i < self->requested_count; i++)
        offset = insert_u8(buffer, bufferSize, offset, self->requested_instances[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventActionStatus(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventActionStatus* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->requested_count);
    
    assert(self->requested_count <= 20);
    for(unsigned int i=0; i < self->requested_count; i++)
        offset = extract_u8(buffer, bufferSize, offset, &self->requested_instances[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_EventActionStatus_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventActionStatus_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->count);
    
    assert(self->count <= 20);
    for(unsigned int i=0; i < self->count; i++)
        offset = insert_MipCmd_3Dm_EventActionStatus_Entry(buffer, bufferSize, offset, &self->actions[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventActionStatus_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventActionStatus_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->count);
    
    assert(self->count <= 20);
    for(unsigned int i=0; i < self->count; i++)
        offset = extract_MipCmd_3Dm_EventActionStatus_Entry(buffer, bufferSize, offset, &self->actions[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_EventTrigger(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTrigger* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->instance);
    offset = insert_MipCmd_3Dm_EventTrigger_Type(buffer, bufferSize, offset, self->type);
    
    if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_GPIO )
        offset = insert_MipCmd_3Dm_EventTrigger_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_THRESHOLD )
        offset = insert_MipCmd_3Dm_EventTrigger_Thresholdparams(buffer, bufferSize, offset, &self->threshold);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_COMBINATION )
        offset = insert_MipCmd_3Dm_EventTrigger_Combinationparams(buffer, bufferSize, offset, &self->combination);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventTrigger(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTrigger* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->instance);
    offset = extract_MipCmd_3Dm_EventTrigger_Type(buffer, bufferSize, offset, &self->type);
    
    if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_GPIO )
        offset = extract_MipCmd_3Dm_EventTrigger_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_THRESHOLD )
        offset = extract_MipCmd_3Dm_EventTrigger_Thresholdparams(buffer, bufferSize, offset, &self->threshold);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_COMBINATION )
        offset = extract_MipCmd_3Dm_EventTrigger_Combinationparams(buffer, bufferSize, offset, &self->combination);
    
    return offset;
}


size_t insert_MipCmd_3Dm_EventTrigger_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventTrigger_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->instance);
    offset = insert_MipCmd_3Dm_EventTrigger_Type(buffer, bufferSize, offset, self->type);
    
    if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_GPIO )
        offset = insert_MipCmd_3Dm_EventTrigger_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_THRESHOLD )
        offset = insert_MipCmd_3Dm_EventTrigger_Thresholdparams(buffer, bufferSize, offset, &self->threshold);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_COMBINATION )
        offset = insert_MipCmd_3Dm_EventTrigger_Combinationparams(buffer, bufferSize, offset, &self->combination);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventTrigger_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventTrigger_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->instance);
    offset = extract_MipCmd_3Dm_EventTrigger_Type(buffer, bufferSize, offset, &self->type);
    
    if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_GPIO )
        offset = extract_MipCmd_3Dm_EventTrigger_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_THRESHOLD )
        offset = extract_MipCmd_3Dm_EventTrigger_Thresholdparams(buffer, bufferSize, offset, &self->threshold);
    else if( self->type == MIPCMD_3DM_EVENTTRIGGER_TYPE_COMBINATION )
        offset = extract_MipCmd_3Dm_EventTrigger_Combinationparams(buffer, bufferSize, offset, &self->combination);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_EventAction(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventAction* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->instance);
    offset = insert_u8(buffer, bufferSize, offset, self->trigger);
    offset = insert_MipCmd_3Dm_EventAction_Type(buffer, bufferSize, offset, self->type);
    
    if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_GPIO )
        offset = insert_MipCmd_3Dm_EventAction_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_MESSAGE )
        offset = insert_MipCmd_3Dm_EventAction_Messageparams(buffer, bufferSize, offset, &self->message);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventAction(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventAction* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->instance);
    offset = extract_u8(buffer, bufferSize, offset, &self->trigger);
    offset = extract_MipCmd_3Dm_EventAction_Type(buffer, bufferSize, offset, &self->type);
    
    if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_GPIO )
        offset = extract_MipCmd_3Dm_EventAction_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_MESSAGE )
        offset = extract_MipCmd_3Dm_EventAction_Messageparams(buffer, bufferSize, offset, &self->message);
    
    return offset;
}


size_t insert_MipCmd_3Dm_EventAction_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_EventAction_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->instance);
    offset = insert_u8(buffer, bufferSize, offset, self->trigger);
    offset = insert_MipCmd_3Dm_EventAction_Type(buffer, bufferSize, offset, self->type);
    
    if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_GPIO )
        offset = insert_MipCmd_3Dm_EventAction_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_MESSAGE )
        offset = insert_MipCmd_3Dm_EventAction_Messageparams(buffer, bufferSize, offset, &self->message);
    
    return offset;
}

size_t extract_MipCmd_3Dm_EventAction_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_EventAction_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->instance);
    offset = extract_u8(buffer, bufferSize, offset, &self->trigger);
    offset = extract_MipCmd_3Dm_EventAction_Type(buffer, bufferSize, offset, &self->type);
    
    if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_GPIO )
        offset = extract_MipCmd_3Dm_EventAction_Gpioparams(buffer, bufferSize, offset, &self->gpio);
    else if( self->type == MIPCMD_3DM_EVENTACTION_TYPE_MESSAGE )
        offset = extract_MipCmd_3Dm_EventAction_Messageparams(buffer, bufferSize, offset, &self->message);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_AccelBias(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AccelBias* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = insert_float(buffer, bufferSize, offset, self->bias[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_AccelBias(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AccelBias* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->bias[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_AccelBias_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_AccelBias_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = insert_float(buffer, bufferSize, offset, self->bias[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_AccelBias_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_AccelBias_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->bias[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_GyroBias(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GyroBias* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = insert_float(buffer, bufferSize, offset, self->bias[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GyroBias(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GyroBias* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->bias[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_GyroBias_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_GyroBias_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = insert_float(buffer, bufferSize, offset, self->bias[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_GyroBias_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_GyroBias_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->bias[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_CaptureGyroBias(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CaptureGyroBias* self)
{
    offset = insert_u16(buffer, bufferSize, offset, self->averaging_time_ms);
    
    return offset;
}

size_t extract_MipCmd_3Dm_CaptureGyroBias(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CaptureGyroBias* self)
{
    offset = extract_u16(buffer, bufferSize, offset, &self->averaging_time_ms);
    
    return offset;
}


size_t insert_MipCmd_3Dm_CaptureGyroBias_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CaptureGyroBias_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = insert_float(buffer, bufferSize, offset, self->bias[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_CaptureGyroBias_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CaptureGyroBias_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->bias[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_MagHardIronOffset(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagHardIronOffset* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = insert_float(buffer, bufferSize, offset, self->offset[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_MagHardIronOffset(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagHardIronOffset* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->offset[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_MagHardIronOffset_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagHardIronOffset_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = insert_float(buffer, bufferSize, offset, self->offset[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_MagHardIronOffset_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagHardIronOffset_Response* self)
{
    
    assert(3 <= 3);
    for(unsigned int i=0; i < 3; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->offset[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_MagSoftIronMatrix(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagSoftIronMatrix* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = insert_float(buffer, bufferSize, offset, self->offset[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_MagSoftIronMatrix(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagSoftIronMatrix* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->offset[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_MagSoftIronMatrix_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_MagSoftIronMatrix_Response* self)
{
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = insert_float(buffer, bufferSize, offset, self->offset[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_MagSoftIronMatrix_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_MagSoftIronMatrix_Response* self)
{
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->offset[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformEuler(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformEuler* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_float(buffer, bufferSize, offset, self->roll);
    offset = insert_float(buffer, bufferSize, offset, self->pitch);
    offset = insert_float(buffer, bufferSize, offset, self->yaw);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Sensor2VehicleTransformEuler(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformEuler* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_float(buffer, bufferSize, offset, &self->roll);
    offset = extract_float(buffer, bufferSize, offset, &self->pitch);
    offset = extract_float(buffer, bufferSize, offset, &self->yaw);
    
    return offset;
}


size_t insert_MipCmd_3Dm_Sensor2VehicleTransformEuler_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformEuler_Response* self)
{
    offset = insert_float(buffer, bufferSize, offset, self->roll);
    offset = insert_float(buffer, bufferSize, offset, self->pitch);
    offset = insert_float(buffer, bufferSize, offset, self->yaw);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Sensor2VehicleTransformEuler_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformEuler_Response* self)
{
    offset = extract_float(buffer, bufferSize, offset, &self->roll);
    offset = extract_float(buffer, bufferSize, offset, &self->pitch);
    offset = extract_float(buffer, bufferSize, offset, &self->yaw);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformQuaternion(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    
    assert(4 <= 4);
    for(unsigned int i=0; i < 4; i++)
        offset = insert_float(buffer, bufferSize, offset, self->q[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Sensor2VehicleTransformQuaternion(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    
    assert(4 <= 4);
    for(unsigned int i=0; i < 4; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->q[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response* self)
{
    
    assert(4 <= 4);
    for(unsigned int i=0; i < 4; i++)
        offset = insert_float(buffer, bufferSize, offset, self->q[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformQuaternion_Response* self)
{
    
    assert(4 <= 4);
    for(unsigned int i=0; i < 4; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->q[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_Sensor2VehicleTransformDcm(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformDcm* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = insert_float(buffer, bufferSize, offset, self->dcm[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Sensor2VehicleTransformDcm(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformDcm* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->dcm[i]);
    
    return offset;
}


size_t insert_MipCmd_3Dm_Sensor2VehicleTransformDcm_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_Sensor2VehicleTransformDcm_Response* self)
{
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = insert_float(buffer, bufferSize, offset, self->dcm[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_Sensor2VehicleTransformDcm_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_Sensor2VehicleTransformDcm_Response* self)
{
    
    assert(9 <= 9);
    for(unsigned int i=0; i < 9; i++)
        offset = extract_float(buffer, bufferSize, offset, &self->dcm[i]);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_ComplementaryFilter(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ComplementaryFilter* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_bool(buffer, bufferSize, offset, self->pitch_roll_enable);
    offset = insert_bool(buffer, bufferSize, offset, self->heading_enable);
    offset = insert_float(buffer, bufferSize, offset, self->pitch_roll_time_constant);
    offset = insert_float(buffer, bufferSize, offset, self->heading_time_constant);
    
    return offset;
}

size_t extract_MipCmd_3Dm_ComplementaryFilter(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ComplementaryFilter* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_bool(buffer, bufferSize, offset, &self->pitch_roll_enable);
    offset = extract_bool(buffer, bufferSize, offset, &self->heading_enable);
    offset = extract_float(buffer, bufferSize, offset, &self->pitch_roll_time_constant);
    offset = extract_float(buffer, bufferSize, offset, &self->heading_time_constant);
    
    return offset;
}


size_t insert_MipCmd_3Dm_ComplementaryFilter_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_ComplementaryFilter_Response* self)
{
    offset = insert_bool(buffer, bufferSize, offset, self->pitch_roll_enable);
    offset = insert_bool(buffer, bufferSize, offset, self->heading_enable);
    offset = insert_float(buffer, bufferSize, offset, self->pitch_roll_time_constant);
    offset = insert_float(buffer, bufferSize, offset, self->heading_time_constant);
    
    return offset;
}

size_t extract_MipCmd_3Dm_ComplementaryFilter_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_ComplementaryFilter_Response* self)
{
    offset = extract_bool(buffer, bufferSize, offset, &self->pitch_roll_enable);
    offset = extract_bool(buffer, bufferSize, offset, &self->heading_enable);
    offset = extract_float(buffer, bufferSize, offset, &self->pitch_roll_time_constant);
    offset = extract_float(buffer, bufferSize, offset, &self->heading_time_constant);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_SensorRange(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_SensorRange* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_MipSensorRangeType(buffer, bufferSize, offset, self->sensor);
    offset = insert_u8(buffer, bufferSize, offset, self->setting);
    
    return offset;
}

size_t extract_MipCmd_3Dm_SensorRange(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_SensorRange* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_MipSensorRangeType(buffer, bufferSize, offset, &self->sensor);
    offset = extract_u8(buffer, bufferSize, offset, &self->setting);
    
    return offset;
}


size_t insert_MipCmd_3Dm_SensorRange_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_SensorRange_Response* self)
{
    offset = insert_MipSensorRangeType(buffer, bufferSize, offset, self->sensor);
    offset = insert_u8(buffer, bufferSize, offset, self->setting);
    
    return offset;
}

size_t extract_MipCmd_3Dm_SensorRange_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_SensorRange_Response* self)
{
    offset = extract_MipSensorRangeType(buffer, bufferSize, offset, &self->sensor);
    offset = extract_u8(buffer, bufferSize, offset, &self->setting);
    
    return offset;
}


////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_3Dm_CalibratedSensorRanges(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CalibratedSensorRanges* self)
{
    offset = insert_MipSensorRangeType(buffer, bufferSize, offset, self->sensor);
    
    return offset;
}

size_t extract_MipCmd_3Dm_CalibratedSensorRanges(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CalibratedSensorRanges* self)
{
    offset = extract_MipSensorRangeType(buffer, bufferSize, offset, &self->sensor);
    
    return offset;
}


size_t insert_MipCmd_3Dm_CalibratedSensorRanges_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_3Dm_CalibratedSensorRanges_Response* self)
{
    offset = insert_MipSensorRangeType(buffer, bufferSize, offset, self->sensor);
    offset = insert_u8(buffer, bufferSize, offset, self->num_ranges);
    
    assert(self->num_ranges <= 50);
    for(unsigned int i=0; i < self->num_ranges; i++)
        offset = insert_MipCmd_3Dm_CalibratedSensorRanges_Entry(buffer, bufferSize, offset, &self->ranges[i]);
    
    return offset;
}

size_t extract_MipCmd_3Dm_CalibratedSensorRanges_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_3Dm_CalibratedSensorRanges_Response* self)
{
    offset = extract_MipSensorRangeType(buffer, bufferSize, offset, &self->sensor);
    offset = extract_u8(buffer, bufferSize, offset, &self->num_ranges);
    
    assert(self->num_ranges <= 50);
    for(unsigned int i=0; i < self->num_ranges; i++)
        offset = extract_MipCmd_3Dm_CalibratedSensorRanges_Entry(buffer, bufferSize, offset, &self->ranges[i]);
    
    return offset;
}

