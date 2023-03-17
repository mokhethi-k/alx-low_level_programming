#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing alphabets ecept q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii = 97;

	while (ascii < 123)
	{
		if (ascii == 101 || ascii == 113)
		{
			continue;
		}

		putchar(ascii);
	}

	putchar('\n');
	return (0);
}
