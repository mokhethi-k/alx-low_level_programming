#include "main.h"
/**
 *print_binary -  prints the binary representation of a number
 *@n: number to be converted and then printed
 *Return: returns nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int flag = 1;

	num = 1UL << 63;
	while (num != 0)
	{
		if (num & n)
		{
			_putchar('1');
			flag = 0;
		}
		else if (flag == 0)
		{
			_putchar('0');
		}
		num >>= 1;
	}
	if (flag == 1 && num == 0)
		_putchar('0');
}
