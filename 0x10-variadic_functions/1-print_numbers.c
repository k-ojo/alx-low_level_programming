#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers-print n input numbers
 *
 * @n:number of input inputs
 *
 * Return: sum of n inputs
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%i%s ", va_arg(ap, int), seperator);
	}
	printf("%i\n", va_arg(ap, int));
	va_end(ap);
}
