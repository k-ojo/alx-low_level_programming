#include "main.h"

/**
 * _islower-checks if an alphabet is lower
 * @c: the character being checked
 *
 * Return: 1 if lower
 * return 0 if not lower
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
