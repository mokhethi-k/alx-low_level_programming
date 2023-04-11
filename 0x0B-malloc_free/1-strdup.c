#include "main.h"
#include <stdlib.h>

/**
 *_strdup - points to a duplicated string
 *@str: string to be duplicated
 *Return: returns a pointer on success and NULL if str is NULL
 */

char *_strdup(char *str)
{
	int i, len;
	char *strc;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}


	strc = malloc(sizeof(char) * (len + 1));
	if (strc == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		strc[i] = str[i];
	}
	return (strc);
}
