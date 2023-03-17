#include <stdio.h>
/**
 * main - Entry point
 * Description: printing single digit numbers
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii = 48;

	while (ascii < 58)
	{
		putchar(ascii);
		putchar(',');
		putchar(' ');
		ascii++;
	}

	putchar('\n');

	return (0);
}
