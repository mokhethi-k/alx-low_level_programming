#include "main.h"
/**
 *_strspn - find the substring of a given string
 *@s: substring
 *@accept: string to search in
 *Return: Returns the length of the initial substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}

	return (count);
}
