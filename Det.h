/*
 *     Module : DET 
 *
 *     File Name  :Det.h 
 *
 *     Description :header file of Development Error Tracer Det
 *
 *     Author: Mostafa Elgohary
 *
 *     Created on: Aug 7, 2020
 */



/*
 * Det.h
 *
 *  Created on: Aug 7, 2020
 *      Author: Mostafa Elgohary
 */

#ifndef DET_H_
#define DET_H_

/*  this id for company in autosar  I put it  0  for  test only  */ 
#define DET_VENDOR_ID     (0U) 

#define DET_MODULE_ID     (015U)

#define DET_INSTANCE_ID   (0U)




/*
 *  Module Version 1.0.0
 */
#define DET_SW_MAJOR_VERSION               (1U)
#define DET_SW_MINOR_VERSION               (0U)
#define DET_SW_PATCH_VERSION               (0U)

/*
 *  AUTOSAR Version 4.0.3
 */
#define DET_AR_RELEASE_MAJOR_VERSION              (4U)
#define DET_AR_RELEASE_MINOR_VERSION              (0U)
#define DET_AR_RELEASE_PATCH_VERSION              (3U)


// checking the  std_types.h  AUTOSAR Version  

#if ((DET_SW_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION )||\
     (DET_SW_MINOR_VERSION != STD_AR_RELEASE_MINOR__VERSION )||\
     (DET_SW_PATCH_VERSION != STD_AR_RELEASE_PATCH_VERSION ))
#error "std_types.h  have different AUTOSAR Version "
#endif 
/*********************************Function definitions**********************/

void  Det_Init(void);
Std_ReturnType Det_ReportError(uint16 ModuleId,
							   uint8 InstanceId,
							   uint8 ApiId,
							   uint8 ErrorId);
void Det_Start(void) ;
void Det_GetVersionInfo(Std_VersionInfoType* versioninfo);

#endif /* DET_H_ */
