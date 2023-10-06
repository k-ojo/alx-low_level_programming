#include <stdio.h>

/**
 * main- a program to outpt alphabets
 *
 * Return: 0 if success
 */
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	for (i = 0; i < 26*2; i++)
	{
		putchar(a[i]);
	}

        putchar('\n');
        return (0);
}

