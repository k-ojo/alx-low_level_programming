#include "main.h"

/**
 * cap_string- capitlizes all words in string
 * @str: string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	j = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				if (sep[j] == str[i])
				{
					str[i + 1] -= 32;
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
