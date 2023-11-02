#include "main.h"

/**
 * _strcpy - copies src to dest array
 * @dest: destination array
 * @src: source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (&dest[0]);
}
