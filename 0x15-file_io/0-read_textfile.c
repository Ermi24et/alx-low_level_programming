#include "main.h"

/**
 *read_textfile - a function that reads a text file and prints it to the POSIX
 *@filename: a text file to print
 *@letters: number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_f, read_f, write_f;
	char *b;

	if (filename == NULL)
		return (0);

	open_f = open(filename, O_RDONLY);
	if (open_f == -1)
		return (0);

	b = malloc(letters * sizeof(char));

	if (b == NULL)
		return (0);

	read_f = read(open_f, b, letters);

	write_f = write(STDOUT_FILENO, b, read_f);
	if (write_f != read_f && write_f == -1)
		return (0);

	free(b);
	close(open_f);
	return (read_f);
}
