#include <stdio.h>

/**
 * main- a program to output lower alphabets
 *
 * Return: 0 if success
 */
int main(void)
{
	char i;
	char z;

	for (z = 0; z < 10 ; z++)
		putchar(z + '0');
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
