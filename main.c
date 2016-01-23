/** @file main.c
 *  @brief Main program
 *
 *
 *
 *
 * @author Eduardo Herrera
 */

#include <stdio.h>
#include "complexMath.h"

void printUsage(void);

int main (int argc, char *argv[]){
	struct ComplexNumber number1, number2, result;
	char operator=0;
	
	if(argc < 6){
		printUsage();
		return -1;
	}
	
	getCNumbersOp(&number1, &number2, &operator, argv);
	doCNumbersOp(&result, &number1, &number2, operator);
	printOperation(&result, &number1, &number2, operator);

	return 0;
}

void printUsage(){
	printf("Usage:\n");
			printf("$complexMath op1 operator op2\n \
	operator:\n \
	 + addition\n \
	 - substraction\n \
	 x multiplcation\n \
	 / division\n \
	 \%% modulus\n \
	\n \
	op1:\n \
	 realPart imaginaryPart\n \
	op2:\n \
	 realPart imaginaryPart\n\n \
	 e.g.: (4 + 5i)(1 + 3i)\n \
	 complexMath 4 5 * 1 3\n\n");
}


