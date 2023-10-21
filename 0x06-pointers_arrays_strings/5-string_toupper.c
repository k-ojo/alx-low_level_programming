#include "main.h"

/**
 * string_toupper- changes strings to upper
 * @s: input string
 *
 * Return: Upper case string
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
}
