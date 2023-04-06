#include "main.h"
/**
 * _strlen_recursion - calculate the length of a string
 *@s: a string to check its length
 *Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
	{
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
