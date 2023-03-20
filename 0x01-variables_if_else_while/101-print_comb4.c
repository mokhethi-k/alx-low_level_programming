#include <stdio.h>
/**
 * main - Entry poi
 * Description: print all different combinations of three digits
>>>>>>> d5271f06851a83a18b39e8392e0b5fc2138f686e
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii, ascii1, ascii2;

<<<<<<< HEAD
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
