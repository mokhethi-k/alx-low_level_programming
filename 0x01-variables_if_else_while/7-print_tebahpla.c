#include <stdio.h>
/**
 * main - Entry point
 * Description: printing lower case alphabets in reverse
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii = 90;

	while (ascii >= 65)
	{
		putchar(ascii);
		ascii--;
	}

	putchar('\n');

	return (0);
}
