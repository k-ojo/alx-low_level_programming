#include "dog.h"

/**
 * free_dog- frees allocated dogs
 *
 * @d: input dog
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
