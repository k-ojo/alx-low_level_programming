#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat- concatenates s1 and s2
 * @s1:input string
 * @s2:input string
 * @n: number of characters in s2
 *
 * Return: Pointer to concatenated string
 * null if not successful.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, j = 0;
	int i = 0;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;
	ptr = malloc(sizeof(char) * (l1 + n + 1));

	if (ptr == 0)
		return (0);
	while (s1[i] != '\0')
	{
		*(ptr + i) = s1[i];
		i++;
	}

	for (j = 0; j < n; j++)
	{
		*(ptr + i) = s2[j];
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
