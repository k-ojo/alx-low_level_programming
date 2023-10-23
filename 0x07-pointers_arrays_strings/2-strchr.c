#include "main.h"

/**
 * _strchr- finds a character in a given string
 * @s: input string
 * @c: character to find
 *
 * Return: the found character
 * otherwise return NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr = s;

	while (*ptr != '\0' && *ptr != c)
	{
		ptr++;
	}
	if (*ptr == c)
		return (ptr);
	return (NULL);
}
