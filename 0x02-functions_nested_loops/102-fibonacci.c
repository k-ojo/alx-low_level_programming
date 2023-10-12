#include<stdio.h>

/**
 * main-fibunacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	long int f, s, c;
	int i;
	f = 1;
	s = 2;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		c = f + s;
		f = s;
		s = c;
		if (i == 47)
			printf("%li\n", c);
		else
			printf("%li, ", c);
	}
	return (0);
}
