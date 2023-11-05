#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fileFD;
	ssize_t bytes_read;

	char buff[1024];

	fileFD = open("source.txt", O_RDONLY);

	if (fileFD == -1)
	{
		perror("Error opening file:");
		exit(EXIT_FAILURE);
	}

	bytes_read = read(fileFD, buff, sizeof(buff));

	if (bytes_read == -1)
	{
		perror("Error reading from file");
		exit(EXIT_FAILURE);
	}


	close(fileFD);
}
