#include "main.h"
/**
 * _isupper - checks if an alphabet is upper case or lower case
 * @c: the alphabet to be checked
 * Return: Returns 1 if upper or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);
}
