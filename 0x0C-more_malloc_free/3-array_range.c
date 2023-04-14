#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: minimum number to start from
 *@max: maximum number to end to
 *Return: returns pointer or NULL on failure
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	size = max  - min + 1;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}
