/**
 * free_dog - free dog
 * @d: d int
 */
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
