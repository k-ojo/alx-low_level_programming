#include "main.h"

/**
 * _memset- set the initial values in the memory to constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of times
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
