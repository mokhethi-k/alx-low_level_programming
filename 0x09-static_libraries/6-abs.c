#include "main.h"
/**
 * _abs - Compute the absolute value of a number
 *@n: Number to be checked
 * Return: Returns an integer
 */
int _abs(int n)
{
	if (n < 0)
		return (n *= -1);
	else
		return (n);
}
