#include "main.h"
#include <stdlib.h>

/**
 * array_range- creats array contain [min, max] of int
 * @min: minum integer input
 * @max: largest integer input
 *
 * Return: pointer to array of int
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *ptr;

	if (min > max)
		return (0);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
		return (0);
	for (i = min; i <= max; i++)
	{
		*(ptr + j) = i;
		j++;
	}
	return (ptr);
}
