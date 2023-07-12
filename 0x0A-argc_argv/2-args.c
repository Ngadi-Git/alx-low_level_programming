#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all the arguments a program gets.
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments.
 *
 *Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	int indx;

	for (indx = 0; indx < argc; indx++)
	{
		printf("%s\n", argv[indx]);
	}
	return (0);
}
