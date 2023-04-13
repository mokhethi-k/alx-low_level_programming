#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return (leng);
}

/**
 *_memcpy - coppies the memory area
 *@dest: the destination memory
 *@src: the source where the memory id copied from
 *@n: number of bytes to be copied
 *Return: returns a pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

/**
 *string_nconcat - checks if the function succeded or failed
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes for s2
 *Return: return a pointer on seecess and NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *strings;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	strings = malloc(sizeof(char) * (len1 + n + 1));
	if (strings == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		_memcpy(strings, s1, len1);
	}
	_memcpy(strings + len1, s2, n);
	strings[len1 + n] = '\0';
	return (strings);
}

