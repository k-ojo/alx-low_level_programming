#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints from n to 98
 * @n:integer from which print begins
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("98\n");
				return;
			}
			printf("%i, ", i);
		}
	}
	for (i = n; i > 98; i--)
	{
		printf("%i, ", i);
	}

	printf("98\n");
}
