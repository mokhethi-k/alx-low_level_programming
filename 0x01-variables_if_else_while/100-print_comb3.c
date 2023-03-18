#include <stdio.h>
/**
 * main - Entry point
 * Description: printing all different combination of two digits
 * Return: Always return 0 on success
 */

int main(void)
{
	int ascii, ascii2;

	for (ascii = 48; ascii < 58; ascii++)
	{
		for (ascii2 = 49; ascii2 < 58; ascii2++)
		{
			if (ascii2 > ascii)
			{
				putchar(ascii);
				putchar(ascii2);
				if (ascii != 56 || ascii2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
