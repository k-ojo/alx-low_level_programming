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
	char *b;
	ssize_t width, read_count;
	ssize_t file = open(filename, O_RDONLY);

	if (file != -1)
	{
		b = malloc(sizeof(char) * letters);
		read_count = read(file, b, letters);
		width = write(STDOUT_FILENO, b, read_count);
		close(file);
		free(b);
		return (width);
	}

	return (0);
}
