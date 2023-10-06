#include<stdio.h>

/**
 * main- this a program that prints the sizes of various datatypes
 *
 * Return: 0 if successful
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("Size of an integer: %ld byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
