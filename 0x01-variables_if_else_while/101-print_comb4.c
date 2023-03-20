#include <stdio.h>
/**
 * main - Entry poi
 * Description: print all different combinations of three digits
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii, ascii1, ascii2;

	for (ascii = 0; ascii < 8; ascii++)
	{
		for (ascii1 = ascii + 1; ascii1 < 9; ascii1++)
		{
			for (ascii2 = ascii1 + 1; ascii2 < 10; ascii++)
			{
				putchar((ascii % 10) + '0');
				putchar((ascii1 % 10) + '0');
				putchar((ascii2 % 10) + '0');

				if (ascii == 7 && ascii1 == 8 && ascii2 == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
