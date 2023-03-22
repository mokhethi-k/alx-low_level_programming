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
			_putchar(ans);
			if (j != 9 || i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
