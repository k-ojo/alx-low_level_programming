#include "main.h"

/**
 * _strlen- computes the length of string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, count = {0, 0};

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
