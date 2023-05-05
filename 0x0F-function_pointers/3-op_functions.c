#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - adds 2 numbers together
 *@a: first number
 *@b: second number
 *Return: returns the sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtract 2 numbers
 *@a: first number
 *@b: second number
 *Return: returns the difference of the 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiply 2 numbers
 *@a: first number
 *@b: second number
 *Return: returns the product of the 2 numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - devide 2 numbers
 *@a: first number
 *@b: second number
 *Return: returns the quotient of the 2 numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - checks the reminder of 2 numbers division
 *@a: first number
 *@b: second number
 *Return: returns the reminder of 2 numbers division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
