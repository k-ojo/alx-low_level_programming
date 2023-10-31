#include <stdio.h>

/**
 * main-prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(__attribute__((unsed)) int argc, char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
