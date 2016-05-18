#ifndef MC5883L_h
#define MC5883L_h

#include <Wire.h>
#include "Arduino.h"

#define MC5883L_DEVICE 0x1E
#define MC5883L_BYTES_READ 6

#define MC5883L_CONF_REG_A 0x00
#define MC5883L_CONF_REG_B 0x01

#define MC5883L_MODE_REG 0x02

#define MC5883L_DOUT_X_MSB_REG 0x03
#define MC5583L_DOUT_X_LSB_REG 0x04
#define MC5583L_DOUT_Z_MSB_REG 0x05
#define MC5583L_DOUT_Z_LSB_REG 0x06
#define MC5583L_DOUT_Y_MSB_REG 0x07
#define MC5583L_DOUT_Y_LSB_REG 0x08

#define MC5583L_STATUS_REG 0x09

#define MC5583L_ID_REG_A 0x0A
#define MC5583L_ID_REG_B 0x0B
#define MC5583L_ID_REG_C 0x0C

typedef enum
  {
    MC5883L_SAMPLES_8 = 0b11,
    MC5883L_SAMPLES_4 = 0b10,
    MC5883L_SAMPLES_2 = 0b01,
    MC5883L_SAMPLES_1 = 0b00
  } MC5883L_samples_t;

typedef enum
  {
    MC5883L_DATARATE_75HZ = 0b110,
    MC5883L_DATARATE_30HZ = 0b101,
    MC5883L_DATARATE_15HZ = 0b100,
    MC5883L_DATARATE_7_5HZ = 0b011,
    MC5883L_DATARATE_3HZ = 0b010,
    MC5883L_DATARATE_1_5HZ = 0b001,
    MC5883L_DATARATE_0_75HZ = 0b000
  } MC5883L_dataRate_t;

typedef enum
  {
    MC5883L_RANGE_8_1GA = 0b111,
    MC5883L_RANGE_5_6GA = 0b110,
    MC5883L_RANGE_4_7GA = 0b101,
    MC5883L_RANGE_4GA = 0b100,
    MC5883L_RANGE_2_5GA = 0b011,
    MC5883L_RANGE_1_9GA = 0b010,
    MC5883L_RANGE_1_3GA = 0b001,
    MC5883L_RANGE_0_88GA = 0b000
  } MC5883L_range_t;

typedef enum
  {
    MC5883L_IDLE = 0b10,
    MC5883L_SINGLE = 0b01,
    MC5883L_CONTINUOUS = 0b00
  } MC5883L_mode_t;

#ifndef VECTOR_STRUCT_H
#define VECTOR_STRUCT_H
struct Vector
{
  float XAxis;
  float YAxis;
  float ZAxis;
};
#endif

class MC5883L

//to be continued





