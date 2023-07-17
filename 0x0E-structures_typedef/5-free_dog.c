#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -a fucntion that make the dog free
 * @d: dog objj
 * Return: just none
 **/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	return;
	}

	if (d->owner != NULL)
	{
	free(d->owner);
	}

	if (d->name != NULL)
	{
	free(d->name);
	}
	free(d);
}
