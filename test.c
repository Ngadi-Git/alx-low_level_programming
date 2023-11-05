#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp;

	fp = fopen("file.txt", "w");
	fprintf(fp, "%s \n", "Hi everybody");

	fclose(fp);

	return (0);

}
