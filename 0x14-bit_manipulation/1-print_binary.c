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
	int flag = 0;
	int cont = 0;
	int i, a = 1, b, size = sizeof(num) * 8;
	unsigned long int p;

	for (i = 0; i < size; i++)
	{
		p = ((a << (size - 1 - i)) & num);
		if (p >> (size - 1 - i))
			flag = 1;
		if (flag)
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
