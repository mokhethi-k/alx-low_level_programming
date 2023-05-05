#include "main.h"
/**
 *flip_bits - flip the bits
 *@n: number tobe fliped
 *@m: number to get to
 *Return: returns number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_num;
	unsigned int i = 0;

	new_num = n ^ m;
	while (new_num != 0)
	{
		i = i + (new_num & 1);
		new_num >>= 1;
	}

	return (i);
}
