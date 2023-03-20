#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing all combinations of three digits numbers
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
				putchar(ascii);
				putchar(ascii1);
				putchar(ascii2);

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