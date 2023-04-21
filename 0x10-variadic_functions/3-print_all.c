#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints the list of parameters of defferent formats
 *@format: the formart of a parameter passed
 *return: returns nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	char *string, *com = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		i = 0;

		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", com, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", com, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", com, va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", com, string);
				break;
			default:
				i++;
				continue;
			}
			com = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
	
}
