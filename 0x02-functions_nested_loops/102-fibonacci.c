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

	printf("1, 2,");
	for (i = 0; i <= 50; i++)
	{
		c = f + s;
		s = c;
		f = s;
		if (i == 50)
			printf("%i\n", c);
		else
			printf("%i, ", c);
	}
	return (0);
}
