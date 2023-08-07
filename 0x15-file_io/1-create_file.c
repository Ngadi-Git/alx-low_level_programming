#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content to be written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc;
	int count_letters;
	ssize_t bytesWritten;

	if (!filename)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fileDesc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (count_letters = 0; text_content[count_letters]; count_letters++)
		;

	bytesWritten = write(fileDesc, text_content, count_letters);
	if (bytesWritten == -1)
		return (-1);

	close(fileDesc);

	return (1);
}
