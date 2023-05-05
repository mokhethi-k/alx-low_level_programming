#include "main.h"
/**
 *set_bit - sets a value of a bit to 1 at a given index
 *@n: pointer to a given number
 *@index: given index
 *Return: returns 1 if successful and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n | (1UL << index);

	return (-1);
}
