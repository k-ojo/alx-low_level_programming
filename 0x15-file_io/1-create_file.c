#include "main.h"

/**
 * create_file- creates a file
 * @filename: the name of file to be created
 * @text_content: content to be added to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int n;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file != -1)
	{
		if (text_content == 0)
		{
			close(file);
			return (1);
		}
		n = write(file, text_content, strlen(text_content));
		if (n != -1)
		{
			close(file);
			return (1);
		}
	}
	return (-1);
}
