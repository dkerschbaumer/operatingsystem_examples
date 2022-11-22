//
// basic memory obersvation program
// Author: David Kerschbaumer
//

#include <stdio.h>

int var = 5; // GLOBAL Variables are in DATA segment

int add(int a, int b) // both parameters are on stack again
{
	return a + b;
}

int main()
{
	int x = 4; // This variable is located at the STACK
	int variable_stack = 10; // another stack variable
	printf("Stack: %p\n", &x); // should be something like 0x7FFFFF....
	printf("stack2 %p\n", &variable_stack);  // should be 4 byte next to x
	printf("Globale Var: %p\n", &var); // Global variables are lower in the DATA segment
	int result = add(5,2);
	return 0;
}