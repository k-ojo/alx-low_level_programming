#include "main.h"
#include "stdlib.h"

/**
 * _calloc- allocates memory for array
 * @nmemb: number of elements of array
 * @size: size of bytes
 *
 * Return: pointer allocatd memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb * size == 0)
		return (0);
	ptr  = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	for (i = 0; i < size * nmemb; i++)
		*(ptr + i) = 0;
	return (ptr);
}
