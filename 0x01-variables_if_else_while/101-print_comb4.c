#include <stdio.h>

/**
 * main- a program to output lower alphabets
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;
	int z;
	int k;

	for (z = 0; z < 8; z++)
	{
		for (i = z + 1; i < 9; i++)
		{
			for (k = i + 1 ; k < 10 ; k++)
			{
				putchar(z + '0');
				putchar(i + '0');
				putchar(k + '0');
				if (z == 7 && i == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
