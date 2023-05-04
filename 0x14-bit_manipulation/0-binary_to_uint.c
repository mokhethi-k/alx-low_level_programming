#include "main.h"
#include <stdlib.h>
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to binary number to be converted
 *Return: converted number else 0 if not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			uint = (uint << 1) | (*b - '0');
			b++;
		}
		else
			return (0);
	}

	return (uint);
}
