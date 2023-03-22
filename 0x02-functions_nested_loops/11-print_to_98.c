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

	if (num <= 0 || num < 99)
	{
		for (i = num; i < 99; i++)
		{
			if (num != 97)
			{
				printf("%d, ", i);
			}
			else if (num ==98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (num > 98)
	{
		for (i = num; i != 97; i--)
		{
			if (num != 97)
			{
				printf("%d, ", i);
			}
			else if (num ==98)
			{
				printf("%d\n", i);
			}
		}
	}
	putchar('\n');
}
