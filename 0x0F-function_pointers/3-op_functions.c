
/**
 * op_add- adds 2 numbers
 * @a: input 1
 * @b: input 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- substracts 2 numbers
 * @a: input 1
 * @b: input 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies 2 numbers
 * @a: input 1
 * @b: input 2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- adds 2 numbers
 * @a: input 1
 * @b: input 2
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (a + 1);
	return (a / b);
}

/**
 * op_mod- finds a % b
 * @a: input 1
 * @b: input 2
 *
 * Return:  a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (a + 1);
	return (a % b);
}
