#include "main.h"

/**
 * print_sign- prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if positive
 * 0 if zero
 * -1 if negative
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (1);
	else
		return (0);
}
