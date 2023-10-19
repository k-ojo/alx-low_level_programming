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
	int tmp[];
	count = 0;
	for (i = 0; i >= 0; i++)
	{
		if(dest == '\0')
			break;
		temp[i] = dest[i];
	}
	for (j = 0; j >= 0; j++)
	{
		if(src[j] == '\0')
			break;
		temp[i] = src[j];
		i++;
	}
	temp[i] = '\0';
	return temp;
}
