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

	for (z = 0; z < 10; z++)
	{
		for (i = z; i < 10; i++)
		{
			if (i != z)
			{
				putchar(z + '0');
				putchar(i + '0');
				if (i == 9 && z == 8)
					continue;
				putchar(',');
				putchar(' ');
			}

		}
	}


	putchar('\n');
	return (0);
}
