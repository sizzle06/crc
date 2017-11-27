/*
 * Crc.h
 */

#include "stdint.h"

typedef struct
{
    uint8_t crc_result_width;
    uint32_t polynominal;
    uint32_t initial_value;
    bool input_data_reflected;
    bool result_data_reflected;
    uint32_t xor_value;
    uint32_t check;
    uint32_t magic_check;
} std_parameter;

uint8_t Crc_CalculateCRC8(const uint8_t* Crc_DataPtr, uint32_t Crc_Length,
                          uint8_t Crc_StartValue8, bool Crc_IsFirstCall);

uint8_t Crc_CalculateCRC8(const uint8_t* Crc_DataPtr, uint32_t Crc_Length,
                          uint8_t Crc_StartValue8, bool Crc_IsFirstCall);
