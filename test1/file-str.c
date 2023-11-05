#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

	FILE *fs;

	fs = fopen("new_file.txt", "w");
	if (fs == NULL)
	{
		perror("Error writing!");
		exit(EXIT_FAILURE);
	}
	fprintf(fs, "%s\n", "Hello Everyone");


	fclose(fs);
	
	return (0);
}

