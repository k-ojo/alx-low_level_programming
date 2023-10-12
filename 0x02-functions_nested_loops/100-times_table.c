#include "main.h"

/**
 * print_times_table- computes multiplication table of n size
 * @n: size of table
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; i++)
		{
			if (i * j < 10)
			{
				if (j != n)
					print("  %i, ", i);
				else
					print("  %i", i);
			}

			else if (i * j >= 100)
			{
				if (j != n)
					pintf("%i, ", i);
				else
					printf("%i", i);
			}
			else
			{
				if (j != n)
					print(" %i, ", i);
				else
					print(" %i", i);
			}
		}
		_putchar('\n');
	}
}
