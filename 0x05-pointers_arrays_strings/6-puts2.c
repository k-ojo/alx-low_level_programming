#include "main.h"

/**
 *puts2- prints string to stdout
 * @str: input string
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(i > 0 && str[i - 1] == '\0')
			break;
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
