#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a binary number.
 * @num: input int
 * Return: nothing
 *
 */
void print_binary(unsigned long int num)
{
	int indicator = 0;
	int cont = 0;
	int i, size = sizeof(unsigned long int) * 8;
	unsigned long int p, b;

	for (i = 0; i < size; i++)
	{
		p = ((1 << (size - 1 - i)) & num);
		if (p >> (size - 1 - i))
			indicator = 1;
		if (indicator)
		{
			b = p >> (size - 1 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		_putchar('0');
	}
}
