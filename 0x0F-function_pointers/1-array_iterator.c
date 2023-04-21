#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *@array: name of the array
 *@size: the size of the array
 *@action: pointer to a function
 *Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
