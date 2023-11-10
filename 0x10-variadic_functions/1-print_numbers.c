#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers-print n input numbers
 *
 * @n:number of input inputs
 * @separator: separator
 *
 * Return: sum of n inputs
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == 0)
		return;
	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%i%s", va_arg(ap, int), separator);
	}
	printf("%i\n", va_arg(ap, int));
	va_end(ap);
}
