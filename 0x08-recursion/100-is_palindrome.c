#include "main.h"

/**
 * _strlen- computes string legnth
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
		return (_strlen(s + 1) + 1);
	return (0);
}

/**
 * test_palin- test for paindrome
 * @s: input string
 * @size: size
 * @l: static size
 *
 * Return: 1 for success
 * 0 otherwise
 */
int test_palin(char *s, int size, int l)
{
	if (size < l / 2)
		return (1);
	if (*s != s[size])
		return (0);
	return (test_palin(s + 1, size - 2, l));
}

/**
 * is_palindrome- checks if string is palindrome
 *
 * @s: input string
 *
 * Return: 1 if palindrome
 * 0 if otherwise
 */
int is_palindrome(char *s)
{
	int size = _strlen(s);

	if (size % 2 == 0 && s[size / 2] != s[size / 2 - 1])
		return (0);
	return (test_palin(s, size - 1, size - 1));
}
