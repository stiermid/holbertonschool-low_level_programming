#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free
 * @d: the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}

