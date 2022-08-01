#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - structure
* @name: type 1
* @age: type 2
* @owner: type 3
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
	return;
}

