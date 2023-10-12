#include<stdio.h>

/**
 * main- prints natural numbers
 *
 * Return: always 0
 */
int main(void)
{
	char i;
	int count = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			count += i;
	}

	printf(count);
	return (0);
}
