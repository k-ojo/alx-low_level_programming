#include "main.h"

/**
 * print_alphabet_x10- prints alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	char i, z;

	for (i = 10; i > 0; i--)
	{
		for (z = 'a'; z < 'z'; z++)
		{
			_putchar(z);
		}
		_putchar('\n');

	}
}
