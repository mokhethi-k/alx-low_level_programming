#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees the block of memory
 *@d: pointer to a dog struct
 *Return: returns nothing
 */

void free_dog(dog_t *d)
{
	if (dog_t)
	{
		free(dog_t);
		dog_t = NULL;
	}
}
