#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *Description: Printing lower and upper case alphabets
 * Return: - Always 0 (Success)
 */
int main(void)
{
	int ascii = 97, ascii2 = 65;

	while (ascii < 123)
	{
		putchar(ascii);
		ascii++;
	}
	do {
		putchar(ascii2);
		ascii2++;
	} while (ascii2 < 91);
	putchar('\n');

	return (0);
}
