/*
 *     Module :
 *
 *     File Name  : Std_Types.h
 *
 *     Description :
 *
 *     Author: Mostafa Elgohary
 *
 *     Created on: Aug 7, 2020
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include "Platform_Types.h"
#include "Compiler.h"

/*  this id for company in autosar  I put it  0  for  test only  */ 
#define STD_VENDOR_ID     (0U) 

#define STD_MODULE_ID     (197U)

#define STD_INSTANCE_ID   (0U)




/*
 *  Module Version 1.0.0
 */
#define STD_SW_MAJOR_VERSION               (1U)
#define STD_SW_MINOR_VERSION               (0U)
#define STD_SW_PATCH_VERSION               (0U)

/*
 *  AUTOSAR Version 4.0.3
 */
#define STD_AR_RELEASE_MAJOR_VERSION              (4U)
#define STD_AR_RELEASE_MINOR_VERSION              (0U)
#define STD_AR_RELEASE_PATCH_VERSION              (3U)

/**********************  type definitions *************/

/*This type can be used as standard API return type which is shared between the RTE and the BSW modules.*/
typedef uint8 Std_ReturnType;


/** This type shall be used to request the version of a BSW   
   module   using   the   <Module   name>_GetVersionInfo()function.  */
typedef struct {
	uint16 vendorID;
    uint16 moduleID;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version; 
} Std_VersionInfoType; 




/**********************  Symbol definitions  *************/


/* Because E_OK is already defined within OSEK, the symbol E_OK has to  be  shared. 
 To  avoid  name  clashes  and  redefinition  problems, 
 the  symbols  have to be defined in the following way (approved within implementation): ***/
#ifndef STATUSTYPEDEFINED    
#define STATUSTYPEDEFINED    
#define E_OK    0x00   
typedef unsigned char StatusType; /* OSEK compliance */ 
#endif 
#define E_NOT_OK  0x01


#define STD_HIGH  0x01   /* Physical state 5V or 3.3V */ 
#define STD_LOW   0x00   /* Physical state 0V         */

#define STD_ACTIVE  0x01   /* Logical state active */
#define STD_IDLE    0x00   /* Logical state idle   */

#define STD_ON    0x01 
#define STD_OFF   0x00


#endif /* STD_TYPES_H_ */
