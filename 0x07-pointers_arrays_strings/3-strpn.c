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
	char *ptr_s = s;
	char *ptr_a = accept;
	int count = 0;

	while (*ptr_s != '\0')
	{
		while (*ptr_a != '\0')
		{
			if (*ptr_a != *ptr_s)
				return (count);
			ptr_a++;
		}
		ptr_s++;
	}
	return (count);
}
