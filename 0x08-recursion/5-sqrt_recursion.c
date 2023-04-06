#include "main.h"
/**
 *_sqrt_recursion - calls the square root calculator
 *@n: number to find its square root
 *Return: returns a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (calc(n, 0);
}
/**
 *calc- does the calculation of square root
 *@x:number to be squared
 *@y:answer to x squared
 *Return: returns the square root recursivly
 */

int calc(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (calc(y, x + 1);
}
