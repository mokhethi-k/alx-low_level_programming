#include "function_pointers.h"

/**
 *int_index - searches for integers
 *@array: name of the given array
 *@size: number of elements passed to te array
 *@cmp: pointer to a function
 *Return: returns nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL || size <= 0)
	{
		for (i = 0; i < size; i++)
		{
			if  (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
