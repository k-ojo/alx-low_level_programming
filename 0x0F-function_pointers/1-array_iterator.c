#include "function_pointers.h"

/**
 * array_iterator- iterates through array performing action on each
 * element
 * @array: input array
 * @size: size of array
 * @action: action to perform on each int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
