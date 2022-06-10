
#include "commands_system.h"

#include "utils/serialization.h"

#include <assert.h>



////////////////////////////////////////////////////////////////////////////////
// Shared Type Definitions
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
// Mip Fields
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
size_t insert_MipCmd_System_CommMode(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_System_CommMode* self)
{
    offset = insert_MipFunctionSelector(buffer, bufferSize, offset, self->function);
    offset = insert_u8(buffer, bufferSize, offset, self->mode);
    
    return offset;
}

size_t extract_MipCmd_System_CommMode(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_System_CommMode* self)
{
    offset = extract_MipFunctionSelector(buffer, bufferSize, offset, &self->function);
    offset = extract_u8(buffer, bufferSize, offset, &self->mode);
    
    return offset;
}


size_t insert_MipCmd_System_CommMode_Response(uint8_t* buffer, size_t bufferSize, size_t offset, const struct MipCmd_System_CommMode_Response* self)
{
    offset = insert_u8(buffer, bufferSize, offset, self->mode);
    
    return offset;
}

size_t extract_MipCmd_System_CommMode_Response(const uint8_t* buffer, size_t bufferSize, size_t offset, struct MipCmd_System_CommMode_Response* self)
{
    offset = extract_u8(buffer, bufferSize, offset, &self->mode);
    
    return offset;
}

