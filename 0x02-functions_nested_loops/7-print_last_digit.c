#include "main.h"
#include <limits.h>

/**
 * print_last_digit- prints last digit
 * @n: input number to work on
 *
 * Return: the last digit on n
 */
int print_last_digit(int n)
{
	if (n == INT_MIN)
	{
		_putchar(8 + '0');
		return (8);
	}
	if (n < 0)
		n = -n;

	_putchar(n % 10 + '0');
	return (n % 10);
}
