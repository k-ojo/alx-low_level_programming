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
	int sum, i, j;
	char *str;

	sum = 0;
	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		str = argv[i];

		while (str[j] != '\0')
		{
			if (str[j] < 48 || str[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
