#include "main.h"

/**
 * append_text_to_file - add given text to end of file
 * @filename: name of file to edit
 * @text_content: data to add to file
 *
 * Return: 1 on succes, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, length = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_APPEND);
	if (f == -1)
		return (-1);

	if (!text_content)
	{
		close(f);
		return (1);
	}

	while (text_content[length])
		length++;

	if (write(f, text_content, length) == -1)
	{
		close(f);
		return (-1);
	}

	close(f);
	return (1);
}
