#include "main.h"

/**
 * read_textfile- reads from file
 *
 * *@filename: Name of file to read from
 * @letters: number of letters read
 *
 * Return: the number of printed chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	char letter;
	FILE *file = fopen(filename, "r");

	if (file)
	{
		while ((letter = fgetc(file)) != EOF && i <= letters)
		{
			dprintf(STDOUT_FILENO, "%c", letter);
			i++;
		}
		close(file);
		return (i);
	}

	return (0);

}
