#include "main.h"

/**
 * _pow_recursion- computes x exponent y
 *
 * @x: base
 * @y: index
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1));
}
