/** @file complexMath.h
 *  @brief Function prototypes for the complexMath library.
 *
 *  This contains the prototypes for the console
 *  driver and eventually any macros, constants,
 *  or global variables you will need.
 *
 *  @author Eduardo Herrera
 *  @bug No known bugs.
 */

#include <stdio.h>
#ifndef COMPLEX_MATH
#define COMPLEX_MATH


//Complex number structure
struct ComplexNumber{
	float real;			//Real part
	float img;			//Imaginary part
};



//Adds two complex numbers of type ComplexNumber

//Returns a ComplexNumber pointer
/** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return Void
 */
void getCNumbersOp(struct ComplexNumber *n1, struct ComplexNumber *n2, char *operator, char *argv[]);
 
 /** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return Void
 */
void setCNumber(struct ComplexNumber *ptr, float real, float img);
 
 /** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return Void
 */
void printCNumber(struct ComplexNumber *ptr);

/** @brief Prints character 
 * 
 *  @param *ptr  Pointer to ComplexNumber struct
 *  
 *  @return Void
 */
void printOperation(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);

/** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return Void
 */
int doCNumbersOp(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);

/** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return 
 */
void addCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

/** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return Void
 */
void subCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

/** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return Void
 */
void mulCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

/** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argb[] arguments to be submit from console
 *  @return Void
 */
void divCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

#endif
