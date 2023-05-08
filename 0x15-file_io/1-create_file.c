#include "main.h"

/**
 * create_file - a function that create a new files
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: Success is 1, and if failed is -1
 */
int create_file(const char *filename, char *text_content)
{
	int open_f;

	if (filename == NULL)
		return (-1);

	open_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (open_f == -1)
		return (-1);

	if (text_content != NULL)
	{
		int w_len, t_len;

		for (t_len = 0; text_content[t_len] != '\0'; t_len++)
			;
		w_len = write(open_f, text_content, (t_len));

		if (w_len == -1)
		{
			close(open_f);
			return (-1);
		}
	}
	close(open_f);
	return (1);
}
