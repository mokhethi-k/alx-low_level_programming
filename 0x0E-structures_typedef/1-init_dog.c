#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - initialise the variable
 *@d: pointer to a struct
 *@name: name of the dog
 *@age: age of the dog
 *@owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
