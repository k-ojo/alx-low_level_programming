#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all-print n input numbers
 *
 i* @n:number of input inputs
 * @separator: separator
 *
 * Return: sum of n inputs
 */
void print_all(const char * const format, ...)
{
	va_list lists;
	unsigned int i;
	char *str;

	i = 0;
	va_start(lists, format);

	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lists, int));
				break;
			case 'i':
				printf("%i", va_arg(lists, int));
				break;
			case 'f':
				printf("%f", va_arg(lists, double));
				break;
			case 's':
				str = va_arg(lists, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
					printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || 
					format[i] == 's') && format[(i + 1)] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(lists);
}
