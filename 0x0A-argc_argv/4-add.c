#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Program that adds positive numbers
 *@argc: This is the argument count
 *@argv: This is the argument vector
 *
 *Return: 0;
 */

int main(int argc, char *argv[])
{
	int sum = 0, indx;

	if (argc > 1)
	{
		for (indx = 1; indx < argc; indx++)
		{
			int bee;
			char *str;

			str = argv[indx];
			for (bee = 0; str[bee] != '\0'; bee++)
			{
				if (str[bee] < 48 || str[bee] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (indx = 1; indx < argc; indx++)
	{
		sum += atoi(argv[indx]);
	}
	printf("%d\n", sum);
	return (0);
}
