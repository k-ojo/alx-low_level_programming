#include "3-calc.h"

/**
 * get_op_func- gets opretor
 * @s: input operation
 *
 * Return: function to s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {0, 0}};
	int i;

	i = 0;
	while (*ops[i].op != 0)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (0);
}
