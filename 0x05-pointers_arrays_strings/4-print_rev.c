#include "main.h"

/**
 * _strlen- computes the length of string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s);
	}
	_putchar('\n');
}

