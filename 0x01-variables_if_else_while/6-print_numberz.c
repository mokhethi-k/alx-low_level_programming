#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing numbers using putchar
 * Return: Always 0 on success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
