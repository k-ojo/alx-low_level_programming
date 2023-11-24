#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit- clears bit at index, set bit to 0 at index
 *
 * @n: input int
 * @index: index
 *
 * Return: bit or -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n &= ~(1 << (index));
		return (1);
	}
	return (-1);
}
