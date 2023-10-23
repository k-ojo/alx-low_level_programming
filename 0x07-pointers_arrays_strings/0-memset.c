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
	int i;

	for (i = 0; i < n; n++)
	{
		s[i] = b;
	}
	return (s);
}
