#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int ind, multi;

	multi = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (ind = 1; ind < argc; ind++)
	{
		multi  *= atoi(argv[ind]);
	}
	printf("%d\n", multi);

	return (0);
}
