#include "main.h"

/**
 * _strncpy- copies string
 * @dest: copied to
 * @src: copied from
 * @n: length of string to be copied
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
