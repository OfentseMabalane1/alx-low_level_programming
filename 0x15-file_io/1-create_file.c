#include "main.h"

/**
* append_text_to_file - a function that appends
*text at the end of a file
* @filename: the file name
* @text_content: is the NULL terminated string
*to add at the end of the file
* Return: 1 on success, -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
	int f, length = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	while (text_content && text_content[length])
		length += 1;

	if (write(f, text_content, length) == -1)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
