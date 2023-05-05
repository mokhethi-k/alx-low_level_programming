#include "main.h"
/**
 **_memset - set a value to a block of memory
 *@s: a pointer to a memory
 *@b: a constant byte to fill the memory with
 *@n: first number of bytes to be filled
 *Return: returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; !(n <= 0); i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
