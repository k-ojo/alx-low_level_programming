#include "main.h"
#include <stdio.h>

/**
 * print_times_table- computes multiplication table of n size
 * @n: size of table
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n <= 0)
	{
		if (n == 0)
			printf("0\n");
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j * i == 0 && j == 0)
			{
				printf("0, ");
				continue;
			}
			if (i * j < 10)
			{
				if (j != n)
					printf("  %i, ", i * j);
				else
					printf("  %i\n", i * j);
			}
			else if (i * j >= 100)
			{
				if (j != n)
					printf("%i, ", i * j);
				else
					printf("%i\n", i * j);
			}
			else
			{
				if (j != n)
					printf(" %i, ", i * j);
				else
					printf(" %i\n", i * j);
			}
		}
	}
}
