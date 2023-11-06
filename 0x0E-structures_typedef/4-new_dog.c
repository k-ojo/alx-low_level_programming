#include <string.h>
#include "dog.h"

/**
 * new_dog-creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (0);
	new->name = malloc(strlen(name) + 1);
	if (!new->name)
	{
		free(new);
		return (0);
	}
	new->owner = malloc(strlen(owner) + 1);
	if (!new->owner || !new->name)
	{
		free(new->name);
		free(new);
		return (0);
	}

	while (name[i])
	{
		new->name[i] = name[i];
		i++;
	}
	new->name[i] = '\0';

	i = 0;
	while (owner[i])
	{
		new->owner[i] = owner[i];
		i++;
	}
	new->owner[i] = owner[i];
	new->age = age;
	return (new);
}
