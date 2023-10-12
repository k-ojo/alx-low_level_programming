#include<stdio.h>

/**
 * main-fibunacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int f, s, c = {1, 2, 0};
	char i;

	printf("1, 2,")
	for (i = 0; i <= 50; i++)
	{
		c = f + s;
		s = c;
		f = s;
		if (i == 50)
			printf("%i\n", i);
		else
			printf("%i, ", i);
	}
	return (0);
}
