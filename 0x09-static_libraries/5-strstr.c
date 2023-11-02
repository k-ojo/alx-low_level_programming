#include "main.h"

/**
 * _strstr- searches for substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: Pointer to beginning of substring in main string
 * null if substing is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (haystack[i] != '\0')
	{
		k = i;
		j = 0;
		while (haystack[k] == needle[j])
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (0);
}
