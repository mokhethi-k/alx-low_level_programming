#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints from a given number to 98
 * @num: a number to start from
 * Return: retuns all numbers
 */
void print_to_98(int num)
{
	int i;

	if (num <= 0 && num < 99)
	{
		for (i = num; i < 99; i++)
		{
			printf("%d", i);
			if (num < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (num == 98)
	{
		printf("%d", 98);
		if (num < 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	else if (num > 98)
	{
		for (i = num; i > 97; i--)
		{
			printf("%d", i);
			if (num < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
