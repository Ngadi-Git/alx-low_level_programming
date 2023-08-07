#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @fileRead: file read.
 * @fileWr: file write.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int fileRead, int fileWr, char *argv[])
{
	if (fileRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fileWr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fileRead, fileWr, f_close;
	ssize_t c_chars, bytesRW;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fileRead fileWr");
		exit(97);
	}

	fileRead = open(argv[1], O_RDONLY);
	fileWr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fileRead, fileWr, argv);

	c_chars = 1024;
	while (c_chars == 1024)
	{
		c_chars = read(fileRead, buf, 1024);
		if (c_chars == -1)
			error_file(-1, 0, argv);
		bytesRW = write(file_to, buf, nchars);
		if (bytesRW == -1)
			error_file(0, -1, argv);
	}

	f_close = close(fileRead);
	if (f_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileRead);
		exit(100);
	}

	f_close = close(fileWr);
	if (f_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileRead);
		exit(100);
	}
	return (0);
}
