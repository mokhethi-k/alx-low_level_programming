#include "main.h"

/**
 * print_line - printing a line
 * @n: multiplying number
 *Return: returns nothing
 */

void print_line(int n)
{

	if (n <= 0)
	{
		continue;
	}
	else
	{
		int i;

		for(i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
