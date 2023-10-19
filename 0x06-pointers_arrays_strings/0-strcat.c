#include "main.h"

/**
 * _strcat- concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: concatenated string(dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0; i >= 0; i++)
	{
		if(dest == '\0')
			break;
	}
	for (j = 0; j >= 0; j++)
	{
		if(src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
