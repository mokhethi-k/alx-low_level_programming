#include "main.h"

/**
 *_memcpy - coppies the memory area
 *@dest: the destination memory
 *@src: the source where the memory id copied from
 *@n: number of bytes to be copied
 *Return: returns a pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
