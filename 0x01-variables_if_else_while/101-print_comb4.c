#include <stdio.h>
/**
 * main - Entry poi
 * Description: print all different combinations of three digits
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii = 0, ascii1, ascii2;

	while (ascii <= 9)
	{
		ascii1 = 0;
		while (ascii1 <= 9)
		{
			ascii2 = 0;
			while (ascii2 <= 9)
			{
				if (ascii != ascii1 &&
				    ascii < ascii1 &&
				    ascii1 != ascii2 &&
				    ascii1 < ascii2)
				{
					putchar(ascii + 48);
					putchar(ascii1 + 48);
					putchar(ascii2 + 48);
					if (ascii + ascii1 + ascii2 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				ascii2++;
			}
			ascii1++;
		}
		ascii++;
	}
	putchar('\n');
	return (0);
}
