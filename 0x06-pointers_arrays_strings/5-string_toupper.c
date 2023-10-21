#include "main.h"

/**
 * string_toupper- changes strings to upper
 * @str: input string
 *
 * Return: Upper case string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
