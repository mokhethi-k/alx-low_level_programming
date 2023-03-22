#include "main.h"
/**
 * _isalpha - Checks if the character is an alphabet
 * @c: Character to be checked
 * Return: Returns 1 for an alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
