#include <stdio.h>
#include <stdlib.h>

/**
 * main- find opcodes
 * @argc: The numebr of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned char opcode;
	int i, nb;
	int (*ptr_main)(int, char **) = main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; nb++)
	{
		opcode = *(unsigned char *)ptr_main;
		printf("%.2x", opcode);

		if (nb - 1 == i)
			continue;
		printf(" ");
		
		ptr_main++;
	}

	printf("\n");
	return (0);
}
