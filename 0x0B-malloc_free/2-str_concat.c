#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatinates two strings
 *@s1: first string
 *@s2: second string to be concatinated to first string
 *Return: returns a pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	s3 = malloc(sizeof(char) * (j + i + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
