#include "3-calc.h"

/**
 * main- calculator
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	f = get_op_func(operator);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && f(num1, num2) > num1)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", f(num1, num2));
	return (0);
}
