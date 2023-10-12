#include<stdio.h>

/**
 * main-fibunacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	long int f, s, c, count;

	count = 2;
	f = 1;
	s = 2;

	while (c <= 4000000)
	{
		c = f + s;
		f = s;
		s = c;
		if (c % 2 == 0)
			count += c;
	}
	printf("%li\n", count);
	return (0);
}
