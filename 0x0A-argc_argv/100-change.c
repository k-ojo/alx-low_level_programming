#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints the least number of coins to change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int param, change;

	change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	param = atoi(argv[1]);

	if (param < 0)
	{
		printf("0\n");
		return (0);
	}
	change = param / 25 + (param % 25) / 10 + ((param % 25) % 10) / 5;
	change +=  (((param % 25) % 10) % 5) / 2;
	change += ((((param % 25) % 10) % 5) % 2) / 1;
	printf("%i\n", change);
	return (0);
}
