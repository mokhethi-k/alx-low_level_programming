#include <stdio.h>

/**
 * main - Entry point
 * Description 'print alphabets except q and e'
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ascii = 97;

	while (ascii < 123)
	{
		if (ascii == 101 || ascii == 113)
		{

			ascii++;
			continue;
		}

		putchar(ascii);

		ascii++;
	}

	putchar('\n');

	return (0);
}
