#include "main.h"
/**
 *print_binary -  prints the binary representation of a number
 *@n: number to be converted and then printed
 *Return: returns nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;

	for (num = 1 << 63; num > 0; num = num >> 2)
		(n & num) ? _putchar('1') : _putchar('0');
}
