#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *filename;
	char ch[100];

	filename = fopen("file.txt", "r");
	printf("%s \n", fgets(ch, 80, filename));

	fclose(filename);

	return (0);

}
