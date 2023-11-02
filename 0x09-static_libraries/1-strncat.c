#include "main.h"

/**
 * _strncat- concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n : maximum bytes of src
 *
 * Return: concatenated string(dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i >= 0; i++)
	{
		if (dest[i] == '\0')
			break;
	}
	for (j = 0; j >= 0; j++)
	{
		if (src[j] == '\0' || j >= n)
			break;
		dest[i] = src[j];
		i++;
	}
	if (j >= n)
		return (dest);
	dest[i] = '\0';
	return (dest);
}
