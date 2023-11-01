#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main-adder
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc == 1)
		printf("%i", 0);
	for (i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) == 1 && *argv[i] == '0')
			continue;
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
