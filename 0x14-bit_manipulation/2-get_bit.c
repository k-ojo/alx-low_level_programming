#include "main.h"
#include <stdio.h>

/**
 * get_bit- gets bit at index
 *
 * @n: input int
 * @index: index
 *
 * Return: bit or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		if ((1 << index) & n)
			return (1);
		return (0);
	}
	return (-1);
}
