#include "main.h"

/**
 * wildcmp-compares strings
 * @s1: input string 
 * @s2: inpput string to macth s1
 *
 * Return: 1 is match is success
 * 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if(*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if(*s2 == '*')
	{
		if (*s1 == *(s2 + 1))
		{
			if (*s1 == '\0')
				return (1);
			return (wildcmp(s1 + 1, s2));
		}
		return (0);
	}
	return (0);
}
