#include <stdlib.h>

/**
 *malloc_checked - checks if malloc failed or succedded on allocating the required memory
 *@b: number of bytes to be allocated
 *Return: returns pointer or terminate process with status value 98
 */

void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
		exit(98);
	return (pntr);
}
