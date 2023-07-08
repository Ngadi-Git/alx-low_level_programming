#include <stdio.h>

/**
 * main - A program that prints its own name accompanied by a newline
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;
	return (0);
}
