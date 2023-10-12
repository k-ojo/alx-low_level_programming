#include "main.h"

/**
 * print_last_digit- prints last digit
 * @n: input number to work on
 *
 * Return: the last digit on n
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
