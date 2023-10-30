#include "main.h"

/**
 * creat_array- creates an array of characters
 *
 * @size: size of array to be created
 * @c: input character to be initialize array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	
	if (ptr == NULL || size == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
