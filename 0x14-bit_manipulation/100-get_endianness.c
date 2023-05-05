#include "main.h"
/**
 *get_endianness - checks endians
 *
 *Return: returns 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr = (char*) &x;
	return ((int)*ptr);
}
