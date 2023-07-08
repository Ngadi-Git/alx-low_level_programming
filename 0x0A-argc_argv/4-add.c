#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int ind;

	int sum = 0;

	if (argc > 1)
	{
		for (ind = 1; ind < argc; i++)
		{
			int secnd;
			char *str;

			str = argv[ind];
			for (secnd = 0; str[secnd] != '\0'; secnd++)
			{
				if (str[secnd] <= 47 || str[secnd] >= 58)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (ind = 1; ind < argc; ind++)
	{
		sum += atoi(argv[ind]);
	}
	printf("%d\n", sum);
	return (0);
}
