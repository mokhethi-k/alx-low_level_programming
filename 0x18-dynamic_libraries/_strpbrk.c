#include "main.h"
/**
 *_strpbrk - finds the first character of the string
 *@s: checks characters in a string
 *@accept: the string to be checked
 *Return: returns the pointer to the matching character
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
