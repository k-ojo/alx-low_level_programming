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

	if (str == 0)
		return (0);
	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * str_concat- concatenates 2 strings
 * @s1: input string
 * @s2: input string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int n, m;
	int i, j;
	char *ptr;

	n = _strlen(s1);
	m = _strlen(s2);
	ptr = malloc(sizeof(char) * (n + m + 1));

	if (ptr == 0)
		return (0);
	for (i = 0; i < (n); i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j < m; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}
	*(ptr + i + 1) = '\0';

	return (ptr);
}
