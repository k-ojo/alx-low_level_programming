#include <stdio.h>
#include  <stdlib.h>

/**
 * main-multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
