#include "main.h"

/**
 * _memcpy- copies from src to dest
 * @dest: destination
 * @src: source
 * @n: number of times
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
