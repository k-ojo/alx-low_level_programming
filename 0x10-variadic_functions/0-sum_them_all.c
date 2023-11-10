#include <stdarg.h>

/**
 * sum_them_all-sums a number of inputs
 *
 * @n:number of input inputs
 *
 * Return: sum of n inputs
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end (ap);
	return (sum);
}
