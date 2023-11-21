//
// basic memory observation program
// Author: David Kerschbaumer
//

#include <stdio.h>

int global_var = 5; // GLOBAL Variables are in DATA segment

int add(int a, int b) // both parameters are on stack again
{
	return a + b;
}

int main()
{
	int x1 = 4; // This variable is located at the STACK
	int x2 = 10; // another stack variable
	printf("Stack (x1)   %p\n", &x1); // should be something like 0x7FFFFF....
	printf("stack (x2)   %p\n", &x2);  // should be 4 byte next to x1
	printf("Globale Var: %p\n", &global_var); // Global variables are lower in the DATA segment
	printf("Code:        %p\n", &add); // Code is lower than global variables
	return 0;
}