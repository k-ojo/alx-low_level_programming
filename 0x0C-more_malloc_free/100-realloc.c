#include "main.h"
#include <stdlib.h>

/**
 * _realloc- reallocates memory
 *
 * @ptr: previously allocated
 * @old_size: old size of memory allocated
 * @new_size: New size to be allocated
 *
 * Return: pointer to newly allocated memory
 * NULL if unsuccessful
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *cptr = (char *)ptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	new_ptr = malloc(new_size);
	if (ptr == 0)
		return (new_ptr);
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = cptr[i];
	free(ptr);
	return (new_ptr);
}
