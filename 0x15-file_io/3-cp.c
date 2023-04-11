#include "main.h"

void errorMsg(char *msg, char *file, int exitCode);
void _close(int fd);

/**
 * main - program entry point
 * @ac: argument count
 * @av: arguement vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int src, dest, length;
	char buff[1024];

	if (argc != 3)
		errorMsg("Usage: %s file_from file_to\n", argv[0], 97);

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		errorMsg("Error: Can't read from file %s\n", argv[1], 98);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		_close(src);
		errorMsg("Error: Can't write to %s\n", argv[2], 99);
	}

	length = read(src, buff, sizeof(buff));
	while (length > 0)
	{
		if (write(dest, buff, length) == -1)
		{
			_close(dest);
			_close(src);
			errorMsg("Error: Can't write to %s\n", argv[2], 99);
		}
		length = read(src, buff, sizeof(buff));
	}
	_close(dest);
	_close(src);
	return (0);
}

/**
 * errorMsg - Display error message, exit with correct
 * value
 * @msg: Error message
 * @file: File triggering error
 * @exitCode: code to exit with
 *
 * Return: void
 */

void errorMsg(char *msg, char *file, int exitCode)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(exitCode);
}

/**
 * _close - close file descriptors, print message & exit
 * with 100 on fail
 * @fd: fd handle
 *
 * Return: void
 */

void _close(int fd)
{
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
