#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits- clears bit at index, set bit to 0 at index
 *
 * @n: input int
 * @m: input int 2
 *
 * Return: number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;
	while (n > 0)
	{
		m += 1;
		n &= n - 1;
	}
	return (m);
}
