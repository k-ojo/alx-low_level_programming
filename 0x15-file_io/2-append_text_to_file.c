#include "main.h"

/**
 * append_text_to_file- adds content to end of file
 *
 * @filename: name of file to be edited
 * @text_content: content to be added
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, status;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	status = write(file, text_content, strlen(text_content));
	close(file);
	if (status != -1)
		return (1);
	return (-1);
}
