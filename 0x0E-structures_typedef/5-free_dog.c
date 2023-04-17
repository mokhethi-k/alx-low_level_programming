#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees the block of memory
 *@d: pointer to a dog struct
 *Return: returns nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
		d = NULL;
	}
}
