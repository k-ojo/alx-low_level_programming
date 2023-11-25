#include "main.h"

/**
 * get_endianess- find the endianess of a computer
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
