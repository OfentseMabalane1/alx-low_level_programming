#include "main.h"

/**
* read_textfile - a function that reads a text file
*and prints it to the POSIX standard output
* @filename: the file name
* @letters: the number of letters
* Return: the actual number of letters or 0 if fails
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, length;
	char *out;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f < 03)
		return (0);

	out = malloc(sizeof(filename) * letters);
	if (!out)
	{
		close(f);
		return (0);
	}

	length = read(f, out, letters);
	if (length < 0)
	{
		close(f);
		free(out);
		return (0);
	}

	length = write(STDOUT_FILENO, out, length);
	free(out);
	close(f);
	if (length < 0)
		return (0);
	return (length);
}
