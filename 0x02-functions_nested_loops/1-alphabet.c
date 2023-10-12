#include "main.h"

/**
 * print_alphabet- prints english alphabets
 *
 * Return: return 0 if success
 */
int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

