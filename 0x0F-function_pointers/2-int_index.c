#include "function_pointers.h"

/**
 * int_index-serches for an int in an array
 * @array: input array
 * @size: size of array
 * @cmp: compare function
 *
 * Return: index of found element
 * -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0 || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
