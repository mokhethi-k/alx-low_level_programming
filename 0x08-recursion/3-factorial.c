#include "main.h"
/**
 *factorial - calcualtes the factorial if a given number
 *@n: given number
 *Return: returns the factorial of a number
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
