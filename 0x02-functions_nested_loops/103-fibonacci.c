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

	while (0)
	{
		c = f + s;
		f = s;
		s = c;
		if (c >= 4000000)
			return;
		if (c % 2 == 0)
			count += c;
	}
	printf("%li", count);
	return (0);
}
