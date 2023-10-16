#include "main.h"

/**
 * print_rev- computes the length of string
 * @s: input string
 *
 */
void print_rev(char *s)
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
		_putchar(s[i]);
	}
	_putchar('\n');
}

