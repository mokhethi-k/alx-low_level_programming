#include "main.h"
#include <stdlib.h>

/**
 *_strdup - points to a duplicated string
 *@str: string to be duplicated
 *Return: returns a pointer on success and NULL if str is NULL
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *strc;

	len = 0;
	while (*str != '\0')
	{
		len++;
	}


	strc = malloc(len + 1);
	if (str == NULL || strc == NULL)
		return (NULL);

	for (i = 0; i < (len + 1); i++)
	{
		strc = str[i];
	}
	return (strc);
}
