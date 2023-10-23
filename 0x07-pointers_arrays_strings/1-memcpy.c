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
	char *ptr_d = dest;
	char const  *ptr_s = src;

	for (i = 0; i < n; i++)
	{
		*ptr_d++ = *ptr_s++;
	}
	return (dest);
}
