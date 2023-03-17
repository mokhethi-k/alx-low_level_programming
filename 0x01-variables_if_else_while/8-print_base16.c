#include <stdio.h>
/**
 * main - Entry point
 * Description: printing hex numbers
 * Return: Always returns 0 on success
 */

int main(void)
{
	int ascii = 48, ascii2 = 97;

	while (ascii <= 57)
	{
		putchar(ascii);
		ascii++;
	}
	do {
		putchar(ascii2);
		ascii2++;
	} while (ascii2 <= 102);

	putchar('\n');

	return (0);
}
