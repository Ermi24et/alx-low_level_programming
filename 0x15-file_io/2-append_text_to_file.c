#include "main.h"

/**
 * append_text_to_file - a function That appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to append to a text
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_f;

	open_f = open(filename, O_RDWR | O_APPEND);
	if (open_f == -1)
		return (-1);
	if (text_content != NULL)
	{
		int t_len, w_len;

		for (t_len = 0; text_content[t_len] != '\0'; t_len++)
			;
		w_len = write(open_f, text_content, t_len);

		if (w_len == -1)
		{
			close(open_f);
			return (-1);
		}
	}
	close(open_f);
	return (1);
}
