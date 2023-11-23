#include "main.h"

/**
 * binary_to_uint- converts bits to int
 *
 * @b:string of bits
 *
 * Return: converted number or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (b)
	{
		while (b[i] != '\0')
		{
			if (!(b[i] == 48 || b[i] == 49))
				return (0);
			result = result * 2 + (b[i] - '0');
			i++;
		}
		return (result);
	}
	return (0);
}


