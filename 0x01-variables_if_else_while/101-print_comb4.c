#include <stdio.h>
/**
 * main - Entry poi
 * Description: print all different combinations of three digits
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii, ascii1, ascii2;

	for (ascii = 0; ascii < 10; ascii++)
	{
		for (ascii1 = 1; ascii1 < 10; ascii1++)
		{
			for (ascii2 = 2; ascii2 < 10; ascii++)
			{
				putchar(ascii + '0');
				putchar(ascii1 + '0');
				putchar(ascii2 + '0');

				if (ascii + ascii1 + ascii2 != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
