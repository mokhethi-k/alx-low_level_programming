#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - prints struct dog
 *@d:pointer to a struct
 *return: nothing
 */

void print_dog(struct dog *d)
{

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		printf("/x2b[1C\n");
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	printf("age: %f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else
	{
		printf("owner: %s", d->owner);
	}
}
