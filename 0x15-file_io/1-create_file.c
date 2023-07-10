#include "main.h"

/**
 *create_file - a function that creates a file
 *@filename: name of the file
 *@text_content: A pointer to a string to write to the file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_f, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_f = write(fd, text_content, length);

	if (fd == -1 || write_f == -1)
		return (-1);
	close(fd);

	return (1);
}
