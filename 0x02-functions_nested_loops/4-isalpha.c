#include "main.h"

/**
 * _isalpah- checks if character is alphabet
 * @c: character to be checked
 *
 * Return: 1 if alphabet
 * 0 if not alphabet
 */
int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}

	for (i == 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1)
	}
	return (0);
}

