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

	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		else
		{
			s[i] = c;
		}
	}
	return (s);
}
