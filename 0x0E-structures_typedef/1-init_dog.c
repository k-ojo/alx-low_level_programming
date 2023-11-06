#include "dog.h"

/**
 * init_dog- initializes dog structure
 * @d: dog structure
 * @name: dog's name
 * @owner: dog owner
 * @age: dog age
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
