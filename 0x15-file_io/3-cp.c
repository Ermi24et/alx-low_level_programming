#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: number of arguments
* @argv: a string
* Return: 0
*/

int main(int argc, char *argv[])
{
	int from_f, to_f;
	int m = 1024, n = 0;
	char b[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from_f = open(argv[1], O_RDONLY);

	if (from_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_f = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);

	if (to_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from_f), exit(99);
	}

	while (m == 1024)
	{
		m = read(from_f, b, 1024);
		if (m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n = write(to_f, b, m);
		if (n < m)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(from_f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_f), exit(100);

	if (close(to_f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_f), exit(100);

	return (0);
}
