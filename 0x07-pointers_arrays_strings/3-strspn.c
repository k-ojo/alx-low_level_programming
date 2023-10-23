#include "main.h"

/**
 * _strspn- finds number of bytes in initial
 * segment of s which consist only bytes from accept
 * @s: string to compare
 * @accept: search string
 *
 * Return: number of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (s[i] != accept[j])
			return (i);
	}
	return (i);
}
