#include "main.h"
/**
 *get_bit - find the value of the bit at a given index
 *@n: a number to be checked
 *@index: index to fiind
 *Return: returns the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
