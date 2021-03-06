#ifndef __MPU9250_H
#define __MPU9250_H

typedef enum
{
	MPU9250_Ok,
	MPU9250_Err,
	MPU9250_i2cTimeout,
	MPU9250_i2cErr,
	MPU9250_i2cBusy,
	MPU9250_NotFound
} MPU9250_Status;

typedef struct
{
	uint8_t Addr;
	uint8_t AK893Addr;
	I2C_StructBehavior i2c;
	MPU9250_Status Stat;
} MPU9250_StructBehavior;

#define AK8963_WHO_AM_I  0x00
#define AK8963_INFO      0x01
#define AK8963_ST1       0x02
#define AK8963_XOUT_L    0x03
#define AK8963_XOUT_H    0x04
#define AK8963_YOUT_L    0x05
#define AK8963_YOUT_H    0x06
#define AK8963_ZOUT_L    0x07
#define AK8963_ZOUT_H    0x08
#define AK8963_ST2       0x09
#define AK8963_CNTL      0x0A
#define AK8963_ASTC      0x0C
#define AK8963_I2CDIS    0x0F
#define AK8963_ASAX      0x10
#define AK8963_ASAY      0x11
#define AK8963_ASAZ      0x12

#define MPU9250_SELF_TEST_X_ACCEL 	0x0D
#define MPU9250_SELF_TEST_Y_ACCEL 	0x0E
#define MPU9250_SELF_TEST_Z_ACCEL 	0x0F
#define MPU9250_SELF_TEST_A      	0x10

#define MPU9250_XG_OFFSET_H      	0x13
#define MPU9250_XG_OFFSET_L      	0x14
#define MPU9250_YG_OFFSET_H      	0x15
#define MPU9250_YG_OFFSET_L     	0x16
#define MPU9250_ZG_OFFSET_H     	0x17
#define MPU9250_ZG_OFFSET_L      	0x18
#define MPU9250_SMPLRT_DIV       	0x19
#define MPU9250_CONFIG           	0x1A
#define MPU9250_GYRO_CONFIG      	0x1B
#define MPU9250_ACCEL_CONFIG     	0x1C
#define MPU9250_ACCEL_CONFIG2    	0x1D
#define MPU9250_LP_ACCEL_ODR     	0x1E
#define MPU9250_WOM_THR          	0x1F

#define MPU9250_MOT_DUR          	0x20
#define MPU9250_ZMOT_THR         	0x21
#define MPU9250_ZRMOT_DUR        	0x22

#define MPU9250_FIFO_EN          	0x23
#define MPU9250_I2C_MST_CTRL     	0x24
#define MPU9250_I2C_SLV0_ADDR    	0x25
#define MPU9250_I2C_SLV0_REG     	0x26
#define MPU9250_I2C_SLV0_CTRL   	0x27
#define MPU9250_I2C_SLV1_ADDR    	0x28
#define MPU9250_I2C_SLV1_REG     	0x29
#define MPU9250_I2C_SLV1_CTRL    	0x2A
#define MPU9250_I2C_SLV2_ADDR    	0x2B
#define MPU9250_I2C_SLV2_REG     	0x2C
#define MPU9250_I2C_SLV2_CTRL    	0x2D
#define MPU9250_I2C_SLV3_ADDR   	0x2E
#define MPU9250_I2C_SLV3_REG     	0x2F
#define MPU9250_I2C_SLV3_CTRL    	0x30
#define MPU9250_I2C_SLV4_ADDR   	0x31
#define MPU9250_I2C_SLV4_REG     	0x32
#define MPU9250_I2C_SLV4_DO      	0x33
#define MPU9250_I2C_SLV4_CTRL    	0x34
#define MPU9250_I2C_SLV4_DI      	0x35
#define MPU9250_I2C_MST_STATUS   	0x36
#define MPU9250_INT_PIN_CFG      	0x37
#define MPU9250_INT_ENABLE       	0x38
#define MPU9250_DMP_INT_STATUS   	0x39
#define MPU9250_INT_STATUS       	0x3A
#define MPU9250_ACCEL_XOUT_H     	0x3B
#define MPU9250_ACCEL_XOUT_L     	0x3C
#define MPU9250_ACCEL_YOUT_H     	0x3D
#define MPU9250_ACCEL_YOUT_L     	0x3E
#define MPU9250_ACCEL_ZOUT_H     	0x3F
#define MPU9250_ACCEL_ZOUT_L     	0x40
#define MPU9250_TEMP_OUT_H       	0x41
#define MPU9250_TEMP_OUT_L       	0x42
#define MPU9250_GYRO_XOUT_H      	0x43
#define MPU9250_GYRO_XOUT_L      	0x44
#define MPU9250_GYRO_YOUT_H      	0x45
#define MPU9250_GYRO_YOUT_L      	0x46
#define MPU9250_GYRO_ZOUT_H      	0x47
#define MPU9250_GYRO_ZOUT_L      	0x48
#define MPU9250_EXT_SENS_DATA_00 	0x49
#define MPU9250_EXT_SENS_DATA_01 	0x4A
#define MPU9250_EXT_SENS_DATA_02 	0x4B
#define MPU9250_EXT_SENS_DATA_03	0x4C
#define MPU9250_EXT_SENS_DATA_04 	0x4D
#define MPU9250_EXT_SENS_DATA_05 	0x4E
#define MPU9250_EXT_SENS_DATA_06 	0x4F
#define MPU9250_EXT_SENS_DATA_07 	0x50
#define MPU9250_EXT_SENS_DATA_08 	0x51
#define MPU9250_EXT_SENS_DATA_09 	0x52
#define MPU9250_EXT_SENS_DATA_10 	0x53
#define MPU9250_EXT_SENS_DATA_11 	0x54
#define MPU9250_EXT_SENS_DATA_12 	0x55
#define MPU9250_EXT_SENS_DATA_13 	0x56
#define MPU9250_EXT_SENS_DATA_14 	0x57
#define MPU9250_EXT_SENS_DATA_15 	0x58
#define MPU9250_EXT_SENS_DATA_16 	0x59
#define MPU9250_EXT_SENS_DATA_17 	0x5A
#define MPU9250_EXT_SENS_DATA_18 	0x5B
#define MPU9250_EXT_SENS_DATA_19 	0x5C
#define MPU9250_EXT_SENS_DATA_20 	0x5D
#define MPU9250_EXT_SENS_DATA_21 	0x5E
#define MPU9250_EXT_SENS_DATA_22 	0x5F
#define MPU9250_EXT_SENS_DATA_23 	0x60
#define MPU9250_MOT_DETECT_STATUS 	0x61
#define MPU9250_I2C_SLV0_DO      	0x63
#define MPU9250_I2C_SLV1_DO      	0x64
#define MPU9250_I2C_SLV2_DO      	0x65
#define MPU9250_I2C_SLV3_DO      	0x66
#define MPU9250_I2C_MST_DELAY_CTRL 	0x67
#define MPU9250_SIGNAL_PATH_RESET  	0x68
#define MPU9250_MOT_DETECT_CTRL  	0x69
#define MPU9250_USER_CTRL        	0x6A
#define MPU9250_PWR_MGMT_1       	0x6B
#define MPU9250_PWR_MGMT_2      	0x6C
#define MPU9250_DMP_BANK         	0x6D
#define MPU9250_DMP_RW_PNT      	0x6E
#define MPU9250_DMP_REG         	0x6F
#define MPU9250_DMP_REG_1       	0x70
#define MPU9250_DMP_REG_2        	0x71
#define MPU9250_FIFO_COUNTH      	0x72
#define MPU9250_FIFO_COUNTL     	0x73
#define MPU9250_FIFO_R_W         	0x74
#define MPU9250_WHO_AM_I 		 	0x75
#define MPU9250_XA_OFFSET_H      	0x77
#define MPU9250_XA_OFFSET_L      	0x78
#define MPU9250_YA_OFFSET_H      	0x7A
#define MPU9250_YA_OFFSET_L      	0x7B
#define MPU9250_ZA_OFFSET_H      	0x7D
#define MPU9250_ZA_OFFSET_L      	0x7E

MPU9250_Status MPU9250_Init(MPU9250_StructBehavior *bstruct, I2C_TypeDef *i2c);

uint8_t MPU9250_ReadOnceReg(MPU9250_StructBehavior *bstruct, uint8_t ReadAddr);
MPU9250_Status MPU9250_ReadReg(MPU9250_StructBehavior *bstruct, uint8_t ReadAddr, uint8_t *outBuf, short int count);
MPU9250_Status MPU9250_WriteReg(MPU9250_StructBehavior *bstruct, uint8_t WriteAddr, uint8_t data);
uint8_t MPU9250_ReadOnceRegAK893(MPU9250_StructBehavior *bstruct, uint8_t ReadAddr);
void MPU9250_ReadRegAK893(MPU9250_StructBehavior *bstruct, uint8_t ReadAddr, uint8_t *outBuf, short int count);
void MPU9250_WriteRegAK893(MPU9250_StructBehavior *bstruct, uint8_t WriteAddr, uint8_t data);

void MPU9250_ReadAllMeasurements(MPU9250_StructBehavior *bstruct, uint16_t *accel, uint16_t *gyro, uint16_t *mag, uint16_t *temp);

#endif






