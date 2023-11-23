#include "main.h"
#include <stdio.h>

/**
 * get_len - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * @count : counter
 * Return: length binary of n
 */
unsigned int get_len(unsigned long int n, unsigned int count)
{
	if (n >> 0)
	{
		if (n >> 1)
			return (get_len(n >> 1, count + 1));
	}
	else
	{
		count++;
	}
	return (count);
}

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
	unsigned int len = get_len(n, 0) + 1;
	unsigned int b, i = 0;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i < len; i++)
	{
		b = n & 1;
		if (index == i)
			return (b);
		n = n >> 1;
	}
	if (index < 64)
		return (0);
	return (-1);
}
