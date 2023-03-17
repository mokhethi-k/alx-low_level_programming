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
		if (ascii == 57)
		{
			break;
		}
		putchar(ascii);
		putchar(',');
		putchar(' ');
		ascii++;
	}

	putchar('\n');

	return (0);
}
