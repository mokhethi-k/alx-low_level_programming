#include "main.h"
/**
 * print_last_digit - Print the last digit of a given number
 * @n: Numbers to be used
 * Return: Returns the last digit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
