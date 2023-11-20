#include <stdio.h>

/**
 * premain - function executed before main
 * Return: nothing
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must");
	printf(" allow,\nI bore my house upon my back!\n");
}
