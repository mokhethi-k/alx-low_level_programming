#include "main.h"
/**
 * print_most_numbers - print from 0 t0 9 exclude 2 and 4
 * Return: retuns nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
