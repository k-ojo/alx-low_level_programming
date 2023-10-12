#include "main.h"
/**
 * times_table- multiplication table
 *
 */
void times_table(void)
{
	int n, i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			if ((n * i) >= 10)
			{
				_putchar((n * i) / 10 + '0');
				_putchar((n * i) % 10 + '0');
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				continue;
			}

			_putchar(n * i + '0');
			_putchar(' ');
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
