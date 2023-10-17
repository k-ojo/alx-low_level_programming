#include "main.h"
#include <stdio.h>

/**
 * print_array- prints members of an array
 *@a: array
 *@n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n - 1; i++)
		printf("%i, ", a[i]);
	printf("%i\n", a[i]);
}

