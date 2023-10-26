#include "main.h"

/**
 * my_is_prime_number- test for primality
 * @n: input integer
 *@i: iterator
 * Return: 1 if prime
 * 0 if not
 */
int my_is_prime_number(int n, long int i)
{
	if (n == 2 || n == 3)
		return (1);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	if (n % i == 0 || n % (i + 2) == 0)
	{
		if ((i * i) >= n)
			return (0);
	}
	my_is_prime_number(n, i + 6);
	return (1);
}

/**
 * is_prime_number- test for primality
 * @n: input integer
 *
 * Return: 1 if prime
 * 0 if not
 */
int is_prime_number(int n)
{
	return (my_is_prime_number(n, 5));
}
