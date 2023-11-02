#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- allocates memory
 *
 * @b size of memory block
 *
 * Return: pointer to the allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr)
		return (ptr);
	exit(98);
}
