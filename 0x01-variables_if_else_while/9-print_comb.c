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

	for (i = 0; i < 10; i++)
	{
		for (z = 0; z < 10; z++)
		{
			putchar(i + '0');
			putchar(z + '0');
			if (i != 9 && z != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
