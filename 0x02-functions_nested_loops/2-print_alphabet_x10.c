#include "main.h"
/**
 * print_alphabet_x10 - Prinnts 10 lines of alphabets upon call
 * Return: Returns nothing
 */
void print_alphabet_x10(void)
{
	int count;
	char c;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
