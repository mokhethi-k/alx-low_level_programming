#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: A number to be checked
 * Return: Returns 1 for positive, 0 for zero and -1 for negetive
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}