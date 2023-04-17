#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

/**
 *new_dog - creates a new object of the struct
 *@name: first member in a struct
 *@age: second member in a struct
 *@owner: third member in a struct
 *Return: returns NULL if the function fails else returns newly created struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j;

	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (owner[j] != '\0')
	{
		j++;
	}
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (i + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (j + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
		return (NULL);
	}
	new_dog->age = age;
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}
