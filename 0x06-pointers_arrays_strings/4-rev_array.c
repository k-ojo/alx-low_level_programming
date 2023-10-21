#include "main.h"

/**
 * reverse_array- reverses array of integers
 * @a: input array
 * @n: array size
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
