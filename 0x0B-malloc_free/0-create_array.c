#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: size of memory allocated
 *@c: character to be added to the array
 *Return: returns a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
