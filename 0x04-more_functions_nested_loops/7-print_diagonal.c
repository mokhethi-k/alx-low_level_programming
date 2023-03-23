#include "main.h"
/**
 * @n: multiplying number
 *
 *Return: returns nothing
 */

void print_diagonal(int n)
{
	if (n >= 1)
	{
		int i, j;

		for (i = 0; i < i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
