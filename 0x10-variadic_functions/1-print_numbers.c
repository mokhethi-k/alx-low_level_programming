#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - print numbers
 *@separator: string between numbers
 *@n: numbers of integers passed to the function
 *Return: re turns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int ints;

	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		ints = va_arg(num, int);
		printf("%d", ints);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
