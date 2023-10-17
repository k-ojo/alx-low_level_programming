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
	char temp;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		s[count - 1 - i] = temp;
		s[count - 1  - i] = s[i];
		s[i] = temp;
	}
}
