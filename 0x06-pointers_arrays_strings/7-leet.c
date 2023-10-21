#include "main.h"

/**
 * leet- encodes strings into 1337
 * @str: input string
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char a[] = "aeotl";
	char b[] = "43071";

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a[j] || str[i] == (a[j] - 32))
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}
