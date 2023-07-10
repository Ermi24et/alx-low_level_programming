#include "main.h"

/**
 *append_text_to_file - a function that appends text at the end of a file.
 *@filename: name of the file
 *@text_content: The string to add to the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_f, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	write_f = write(fd, text_content, length);
	if (fd == -1 || write_f == -1)
		return (-1);

	close(fd);

	return (1);
}
