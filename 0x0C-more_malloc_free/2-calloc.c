#include "main.h"
#include <stdlib.h>
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
/**
 *_calloc - allocates memory for an array
 *@nmemb: type of elements
 *@size: size of each element
 *Return: returns a pointer or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntr = malloc(nmemb * size);

	if (pntr == NULL)
		return (NULL);
	_memset(pntr, 0, nmemb * size);
	return (pntr);
}
