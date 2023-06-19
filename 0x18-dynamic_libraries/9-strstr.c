#include "main.h"
/**
 *_strstr - searches a given substring in the main string
 *@haystack: string to be checked
 *@needle: substring to look for
 *Return: retuns the first occurance of the given substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int count;

	while (*haystack !='\0')
	{
		if (*needle != '\0')
		{
			count++;
		}
	}
	return (needle);
}
