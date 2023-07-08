#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints coints left
 * @args: Paramater Entry
 * @argv: One number of argumets
 * Return: zero onOne number of argumetsr
 */

int main(int args, char *argv[])
{
	int  val, cents = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; val >= 0;)
	{
		if (val >= 25)
			val -= 25;

		else if (val >= 10)
			val -= 10;

		else if (val >= 5)
			val -= 5;

		else if (val >= 2)
			val -= 2;

		else if (val >= 1)
			val -= 1;
		else
			break;
		cents += 1;
	}
	printf("%d\n", cents);
	return (0);
}
