#include "main.h"

/**
 * rev_string- reverses a string
 * @s: input string
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	int const c = count;
	char temp[c];

	for (i = count - 1; i > 0; i--)
	{
		temp[i] = s[i];
	}
	for (i = count - 1; i; i++)
	{
		s[i] = temp[i];
	}
}
