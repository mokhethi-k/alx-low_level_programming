#include "main.h"
/**
 * print_last_digit - Print the last digit of a given number
 * @n: Numbers to be used
 * Return: Returns the last digit of a number
 */
int print_last_digit(int n)
{
	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
