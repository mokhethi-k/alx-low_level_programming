#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *Description: Printing lower and upper case alphabets
 * Return: - Always 0 (Success)
 */
int main(void)
{
	int ascii = 97, ascii2 = 173;

	while (ascii < 123 && ascii2 < 91)
	{
		putchar(ascii);
		putchar(ascii2);
		ascii++;
		ascii2++;
	}
	putchar('\n');

	return (0);
}
