/*
 *     Module :
 *
 *     File Name  :
 *
 *     Description :
 *
 *     Author: Mostafa Elgohary
 *
 *     Created on: Aug 7, 2020
 */

#include "Det.h"

/*********************************Function definitions**********************/

/********************************************************************
*Service name: Det_Init 
*Service ID[hex]: 0x00 
*Sync/Async: Synchronous
*Reentrancy:  Non Reentrant
*Parameters (in): None 
*Parameters (inout): None 
*Parameters (out): None 
*Return value: None 
*Description: Service to initialize the Development Error Tracer. 
*********************************************************************/

void  Det_Init(void){

}



/********************************************************************
*Service name: Det_ReportError
*Service ID[hex]: 0x01 
*Sync/Async: Depending  on  implemented  functionality
*Reentrancy:  Reentrant
*Parameters (in): ModuleId   --->  Module ID of calling module.
*                 InstanceId --->  The identifier of the index based instance of a module,
*                                  starting  from 0, If the module is a single instance module it shall 
*                                  pass 0 as the InstanceId.
*                 ApiId --->ID of API service in which error is detected(defined in SWS of calling module)
*                 ErrorId --->     ID  of detected development error(defined in SWS of calling module).  
*Parameters (inout): None 
*Parameters (out): None 
*Return value: None 
*Description: Service to report development errors. 
*********************************************************************/

Std_ReturnType Det_ReportError(uint16 ModuleId,
							   uint8 InstanceId,
							   uint8 ApiId,
							   uint8 ErrorId)
{



}




/********************************************************************
*Service name: Det_Start
*Service ID[hex]: 0x02 
*Sync/Async: Synchronous 
*Reentrancy:  Non Reentrant
*Parameters (in): None 
*Parameters (inout): None 
*Parameters (out): None 
*Return value: None 
*Description: Service to start the Development Error Tracer.
*********************************************************************/

void Det_Start(void) {

}



/********************************************************************
*Service name: Det_GetVersionInfo
*Service ID[hex]: 0x02 
*Sync/Async: Synchronous 
*Reentrancy: Reentrant
*Parameters (in): None 
*Parameters (inout): None 
*Parameters (out): versioninfo Pointer to where to store the version information of this module. 
*Return value: None 
*Description:Returns the version information of this module. 
*********************************************************************/

void Det_GetVersionInfo(Std_VersionInfoType* versioninfo) {

	
}


