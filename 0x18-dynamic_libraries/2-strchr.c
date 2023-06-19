#include "main.h"

/**
 *_strchr - locates a character in astring
 *@s:a string to be searche
 *@c: a character to be located
 *Return: returns a pointer to the first occureance or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;
	int len;

	while (*s != '\0')
	{
		len++;
	}

	while (i < len)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
