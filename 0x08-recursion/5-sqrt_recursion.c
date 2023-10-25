#include "main.h"

/**
 * my_sqrt_recursion- compute squareroot
 * @n: input integer
 * @b: counter
 *
 * Return: square-root of n
 */
int my_sqrt_recursion(int n, int b)
{
	if (n - b == 0)
		return ((b / 2) + 1);
	if (n - b < 0)
		return (-1);
	my_sqrt_recursion(n - b, b + 2);
}

/**
 * _sqrt_recursion- compute squareroot
 * @n: input integer
 *
 * Return: square-root of n
 */
int _sqrt_recursion(int n)
{
	my_sqrt_recursion(n, 1);
}
