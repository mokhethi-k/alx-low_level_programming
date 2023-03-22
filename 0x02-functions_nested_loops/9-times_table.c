#include "main.h"
/**
 * time_table - prints 9 times table
 * Return: returns nothing
 */
void times_table(void)
{
	int i, j, ans;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			ans = i * j;
			if (j == 0)
			{
				_putchar(ans + '0');
			}
			if (ans < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ans + '0');
			}
			else if (ans >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
