#include <stdio.h>
/**
 * main - Entry point
 * Description: printing single digit numbers
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii = 48;

	while (ascii <= 57)
	{
		putchar(ascii);
		if (ascii == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
		ascii++;
	}

	putchar('\n');

	return (0);
}
