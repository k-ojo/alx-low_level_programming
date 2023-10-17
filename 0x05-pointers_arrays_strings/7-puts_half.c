#include "main.h"

/**
 *puts_half- prints string to stdout
 * @str: input string
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		count += 1;
		i++;
	}
	for (i = count - (count / 2) - 1; i < count - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
