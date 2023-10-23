#include "main.h"

/**
 * _strpbrk-searches for firsr letter in accept
 * @s: string to compare
 * @accept: search string
 *
 * Return: pointer to first letter found
 */
unsigned int _strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
