#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc;
	char *buff;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);
	fileDesc = open(filename, O_RDONLY);

	if (fileDesc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	bytesRead = read(fileDesc, buff, letters);

	if (bytesRead == -1)
	{
		close(fileDesc);
		free(buff);
	}

	bytesWritten = write(STDOUT_FILENO, buff, bytesWritten);
	free(buff);

	if (bytesRead != bytesWritten)
		return (0);
	return (bytesWritten);
	close(fileDesc);
}
