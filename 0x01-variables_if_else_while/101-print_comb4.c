#include <stdio.h>
/**
 * main - Entry poi
 * Description: print all different combinations of three digits
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii, ascii1, ascii2;

	for (ascii = 48; ascii < 58; ascii++)
	{
		for (ascii1 = 49; ascii1 < 58; ascii1++)
		{
			for (ascii2 = 50; ascii2 < 58; ascii2++)
			{
				if (ascii2 > ascii1 && ascii2 > ascii)
				{
					putchar(ascii);
					putchar(ascii1);
					putchar(ascii2);
					if (ascii != 55 || ascii1 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
