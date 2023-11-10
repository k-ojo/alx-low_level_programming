#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings-print n input numbers
 *
 * @n:number of input inputs
 * @separator: separator
 *
 * Return: sum of n inputs
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);
		if (!str)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
