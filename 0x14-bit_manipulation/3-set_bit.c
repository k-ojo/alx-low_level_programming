#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit- gets bit at index
 *
 * @n: input int
 * @index: index
 *
 * Return: bit or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{	
		*n |= 1<<(index);
		return (1);
	}
	return (-1);
}
