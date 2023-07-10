#include "main.h"

/**
 *read_textfile - a function that reads a text file and prints it.
 *@filename: name of a file
 *@letters: number of letters
 *Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, read_f, write_f;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_f = read(fd, buffer, letters);
	write_f = write(STDOUT_FILENO, buffer, read_f);

	free(buffer);
	close(fd);
	return (write_f);
}
