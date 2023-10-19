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

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			dest = '\0';
			return (dest);
		}
		dest[i] = src[i];
	}
	return (dest);
}
