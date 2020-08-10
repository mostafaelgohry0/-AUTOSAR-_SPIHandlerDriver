/*
 *     Module :  compiler Abstraction
 *
 *     File Name  :  Compiler.h
 *
 *     Description :
 *
 *     Author: Mostafa Elgohary
 *
 *     Created on: Aug 7, 2020
 */

#ifndef COMPILER_H_
#define COMPILER_H_

/*  this id for company in autosar   put it  0  for  test only  */
#define  COMPILER_VENDOR_ID                      (0U)

/*
 *  Module Version 1.0.0
 */
#define COMPILER_SW_MAJOR_VERSION               (1U)
#define COMPILER_SW_MINOR_VERSION               (0U)
#define COMPILER_SW_PATCH_VERSION               (0U)

/*
 *  AUTOSAR Version 4.0.3
 */
#define COMPILER_AR_RELEASE_MAJOR_VERSION              (4U)
#define COMPILER_AR_RELEASE_MINOR_VERSION              (0U)
#define COMPILER_AR_RELEASE_PATCH_VERSION              (3U)


/*
 *  Definitions
 */

/* The memory class AUTOMATIC shall be provided as empty definition, used for the declaration of 
 * local pointers and To be used for local non static variables  */
#define  AUTOMATIC

/* This memory class shall be used within type definitions, where no memory qualifier can 
   be specified. This can be necessary for defining pointer types */
#define  TYPEDEF

/*  define with a void pointer to zero definition. */
#define  NULL_PTR    ((void *)0)

/* define for abstraction of the keyword inline */
#define  INLINE  inline

/*define for abstraction of the keyword inline in functions with “static” scope.  */
#define  LOCAL_INLINE



/*
 *  Macros for functions
 */

/*
 * Macro name: FUNC
 *  Parameters (in):   rettype         return  type of the function
 *                     memclass     classification of the function itself none
 *  Parameters (out):  none
 *  Return value:  none
 *  Description:  macro for the declaration and definition of functions that ensures correct
 *                syntax of function declarations as required by a specific compiler.
 */
#define FUNC(rettype, memclass)



/*
 * Macro name: FUNC_P2CONST
 *  Parameters (in):   rettype       return type of the function
 *                     ptrclass       defines the classification of the pointer’s distance
 *                     memclass   classification of the function itself
 *  Parameters (out):  none
 *  Return value:  none
 *  Description:  macro for the declaration and definition of functions returning a pointer to 
 *                a constant. This shall ensure the correct syntax of function declarations 
 *                as required by a specific compiler
 */
#define FUNC_P2CONST(rettype, ptrclass, memclass)



/*
 * Macro name: FUNC_P2VAR
 *  Parameters (in):   rettype    return type of the function
 *                     ptrclass   defines the classification of the pointer’s distance
 *                     memclass   classification of the function itself
 *  Parameters (out):  none
 *  Return value:  none
 *  Description: macro for the declaration and definition of functions returning a pointer to a variable.
 *              This shall ensure the correct syntax of function 
 *              declarations as required by a specific compiler.
 */
#define FUNC_P2VAR(rettype, ptrclass, memclass)



/*
 * Macros for pointers
 */


/*
 * Macro name: P2VAR
 *  Parameters (in):   ptrtype       type of the referenced variable
 *                     memclass      classification of the pointer’s variable itself
 *                     ptrclass      defines the classification of the pointer’s distance
 *
 *  Parameters (out):  none
 *  Return value:  none
 *  Description: macro for the declaration and definition of pointers in RAM, pointing to variables.
 */
#define P2VAR(ptrtype, memclass, ptrclass)



/*
 * Macro name: P2CONST
 *  Parameters (in):   ptrtype       type of the referenced constant
 *                     memclass   classification of the pointer’s variable itself
 *                     ptrclass       defines the classification of the pointer’s distance
 *
 *  Parameters (out):  none
 *  Return value:  none
 *  Description:  macro for the declaration and definition of pointers in RAM pointing to constants
 */
#define P2CONST(ptrtype, memclass, ptrclass)



/*
 * Macro name: CONSTP2VAR
 *  Parameters (in):   ptrtype       type of the referenced variable
 *                     memclass   classification of the pointer’s variable itself
 *                     ptrclass       defines the classification of the pointer’s distance
 *
 *  Parameters (out):  none
 *  Return value:  none
 *  Description:  macro for the declaration and definition of constant pointers accessing variables.
 */
#define CONSTP2VAR (ptrtype, memclass, ptrclass)



/*
 * Macro name: CONSTP2CONST
 *  Parameters (in):   ptrtype       type of the referenced constant
 *                     memclass   classification of the pointer’s variable itself
 *                     ptrclass       defines the classification of the pointer’s distance
 *
 *  Parameters (out):  none
 *  Return value:  none
 *  Description:macro for the declaration and definition of constant pointers accessing constants.
 */
#define CONSTP2CONST(ptrtype, memclass, ptrclass)



/*
 * Macro name: P2FUNC
 *  Parameters (in):   rettype      return type of the function
 *                     ptrclass       defines the classification of the pointer’s distance
 *                     fctname      function name respectively name of the defined type
 *
 *  Parameters (out):  none
 *  Return value:  none
 *  Description :  macro for the type definition of pointers to functions.
 */
#define P2FUNC(rettype, ptrclass, fctname)



/*
 * Keywords for constants
 */


/*
 * Macro name: CONST
 *  Parameters (in):   consttype         type of the constant
 *                     memclass         classification of the constant itself
 *
 *  Parameters (out):  none
 *  Return value:  none
 *  Description :  macro for the declaration and definition of constants.
 */
#define CONST(consttype, memclass)



/*
 * Macro name: VAR
 *  Parameters (in):   vartype         type of the variable
 *                     memclass      classification of the variable itself
 *
 *  Parameters (out):  none
 *  Return value:  none
 *  Description :  macro for the declaration and definition of variables.
 */
#define VAR(vartype, memclass)


#endif /* COMPILER_H_ */
