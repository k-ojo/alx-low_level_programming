#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a binary number.
 * @num: input int
 * Return: nothing
 *
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
