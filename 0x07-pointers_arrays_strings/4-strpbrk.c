#include "main.h"

/**
 * _strpbrk- finds the first match in s
 * @s: input string
 * @accept: search string
 *
 * Return: pointer first match
 */
char * _strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
