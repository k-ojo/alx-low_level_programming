#include <stdio.h>

/**
 * main- a program to output lower alphabets
 *
 * Return: 0 if success
 */
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}

	putchar('\n');
	return (0);
}
