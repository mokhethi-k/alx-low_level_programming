#include "main.h"

/**
 * print_letter - print a letter
 * Return: Returns nothing
 */
void void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
