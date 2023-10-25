#include "main.h"

/**
 * factorial- computes factorial
 *
 * @n: input integer
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n = 0)
		return(1);
	return (n * factorial(n - 1));
}
