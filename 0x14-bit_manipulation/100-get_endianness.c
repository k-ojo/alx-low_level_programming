#include "main.h"

/**
 * get_endianness- find the endianness of a computer
 *
 * Return: architecture endianness
 */
int get_endianness(void)
{
	short int holder = 1;

	if (*(char *)&holder == 1)
		return (1);
	return (0);
}
