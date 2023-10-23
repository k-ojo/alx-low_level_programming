#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints sum of diagrams
 * @a: input array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int down_count = 0;
	long int up_count = 0;

	j = 0;
	for (i = 0; i < (size * size); i += size)
	{
		up_count += a[i + j];
		down_count += a[i + size - j - 1];
		j++;
	}
	printf("%li, %li\n", up_count, down_count);
}
