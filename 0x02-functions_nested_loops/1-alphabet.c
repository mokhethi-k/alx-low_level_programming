#include "main.h"

/**
 * print_alphabet - print a letter
 * Description: When the function is called, it prints alphabets in lower case
 * Return: Returns nothing
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
