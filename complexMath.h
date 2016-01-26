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


/**
 * Complex number structure
 */
struct ComplexNumber{
 /*@{*/
	float real;		/**< Real Part */
	float img;		/**< Imaginary Part */
 /*@}*/
};




/** @brief Prints character 
 * 
 *  @param *n1 First Pointer to ComplexNumber struct
 *  @param *n2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @param *argv[] arguments to be submit from console
 *  @return Void
 */
void getCNumbersOp(struct ComplexNumber *n1, struct ComplexNumber *n2, char *operator, char *argv[]);
 

 /** @brief Set the real and imaginary numbers
 * 
 *  @param *ptr Pointer to ComplexNumber struct
 *  @param real Float real 
 *  @param img Float imaginary 
 *  @return Void
 */
void setCNumber(struct ComplexNumber *ptr, float real, float img);
 
 
 /** @brief Prints the Complex Number 
 * 
 *  @param *ptr Pointer to ComplexNumber struct to print
 *
 *  @return Void
 */
void printCNumber(struct ComplexNumber *ptr);


/** @brief Prints complex number 
 * 
 *  @param *result Pointer to complex number struct that contains the result of the operation 
 *	@param *number1 First complex number
 *  @param *number2 Second complex number
 *	@param operator operator to test
 *  @return Void
 */
void printOperation(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);


/** @brief Prints the operation
 * 
 *  @param *result Result Of the operation
 *  @param *number1 First Pointer to ComplexNumber struct
 *  @param *number2 Second Pointer to ComplexNumber struct
 *  @param *operator Operation to be result
 *  @return int
 */
int doCNumbersOp(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);


/** @brief Add two complex numbers 
 * 
 *  @param *result Pointer to the result of ComplexNumber struct
 *  @param *number1 First complex number
 *  @param *number2 Second complex number
 *  @return Void
 */
void addCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);


/** @brief Substract two complex numbers 
 * 
 *  @param *result The result
 *  @param *number1 First complex number
 *  @param *number2 Second complex number
 *  @return Void
 */
void subCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);


/** @brief Mutiply two complex numbers 
 * 
 *  @param *result Pointer to the result of ComplexNumber struct
 *  @param *number1 First complex number
 *  @param *number2 Second complex number
 *  @return Void
 */
void mulCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);


/** @brief Divide two complex numbers 
  * 
 *  @param *result Pointer to the result of ComplexNumber struct
 *  @param *number1 First complex number
 *  @param *number2 Second complex number
 *  @return Void
 */
void divCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

#endif
