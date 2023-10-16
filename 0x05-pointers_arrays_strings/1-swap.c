#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 * @a:input to be swaped
 * @b:input to be swaped
 */
void swap_int(int *a, int *b)
{
	int c  = *a;

	*b = *b;
	*b = c;
}
