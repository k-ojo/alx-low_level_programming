#include "main.h"
#include <stdlib.h>

/**
 * _strlen- computes length of string
 * @str : input string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;
	int count = 0;

	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * _strdup- copies input string
 * @str : input string
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	if (str == 0)
		return (0);
	char *ptr;
	int i = 0;
	int n = _strlen(str) + 1;

	ptr = malloc(sizeof(char) * (n));

	if (ptr == 0 || n == 0)
		return (0);

	while (*(str + i) != '\0')
	{
		*(ptr + i) = *(str + i);
		i++;
	}

	*(ptr + i) = *(str + i);
	return (ptr);
}
