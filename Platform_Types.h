/*
 *     Module :Platform 
 *
 *     File Name  : Platform_Types.h
 *
 *     Description : Platform types for microcontroller  (AVR)
 *
 *     Author: Mostafa Elgohary
 *
 *     Created on: Aug 7, 2020
 */


#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

/*  this id for company in autosar   put it  0  for  test only  */
#define  PLATFORM_TYPES_VENDOR_ID                     (0U)

/*
 *  Module Version 1.0.0
 */
#define PLATFORM_SW_MAJOR_VERSION               (1U)
#define PLATFORM_SW_MINOR_VERSION               (0U)
#define PLATFORM_SW_PATCH_VERSION               (0U)

/*
 *  AUTOSAR Version 4.0.3
 */
#define PLATFORM_AR_RELEASE_MAJOR_VERSION              (4U)
#define PLATFORM_AR_RELEASE_MINOR_VERSION              (0U)
#define PLATFORM_AR_RELEASE_PATCH_VERSION              (3U)



/**********************  Type definitions *********************/ 

typedef  unsigned int boolean;

typedef unsigned char uint8;     //0..255         0x00..0xFF  
typedef unsigned short uint16;   //0..65535       0x0000..0xFFFF
typedef unsigned int uint32;     //0..4294967295  0x00000000..0xFFFFFFFF 

typedef signed char sint8;       //-128..+127                0x80..0x7F 
typedef signed short sint16;     //-32768 ..+32767           0x8000..0x7FFF 
typedef signed int int32;        //2147483648.. +2147483647  0x80000000..0x7FFFFFFF 


/* The optimized AUTOSAR integer data types (<typename>_least) shall have at least the 
 size given by the type  name, */   
typedef unsigned char uint8_least;     //At least 0..255        
typedef unsigned short uint16_least;   //At least 0..65535       
typedef unsigned int uint32_least;     // At least 0..4294967295 

typedef signed char sint8_least;       //At least -128..+127             
typedef signed short sint16_least;     //At least -32768 ..+32767           
typedef signed int int32_least;        //At least 2147483648.. +2147483647  

typedef float  float32 ;   
typedef double  float64 ;   




/************  Symbol definitions   *****************/


#define CPU_TYPE_8     (8U)
#define CPU_TYPE_16    (16U)
#define CPU_TYPE_32    (32U)

#define MSB_FIRST         (0U) 
#define LSB_FIRST         (1U)

#define HIGH_BYTE_FIRST   (0U) 
#define LOW_BYTE_FIRST    (1U) 


#define CPU_TYPE  CPU_TYPE_8            // AVR 8 bit 

#define CPU_BIT_ORDER   LSB_FIRST       // Little endian  in VAR 

#define CPU_BYTE_ORDER  LOW_BYTE_FIRST  // Little endian  in VAR 

#ifndef TRUE 
#define TRUE     (1U) 
#endif

#ifndef FALSE  
#define FALSE    (0U)
#endif


#endif /* PLATFORM_TYPES_H_ */
