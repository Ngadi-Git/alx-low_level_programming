#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc, c_letters;
	ssize_t bytesW;

	if (!filename)
		return (-1);

	fileDesc = open(filename, O_WRONLY | O_APPEND);

	if (fileDesc == -1)
		return (-1);

	if (text_content)
	{
		c_letters = 0;
		while (text_content[nletters])
			nletters++;

		bytesW = write(fd, text_content, c_letters);

		if (bytesW == -1)
			return (-1);
	}

	close(fileDesc);

	return (1);
}
