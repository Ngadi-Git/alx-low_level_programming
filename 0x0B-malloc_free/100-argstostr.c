#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates arguments of the program.
  *@ac: arguments count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on failure.
  */

char *argstostr(int ac, char **av)
{
	int indx, jay, kay, size;
	char *arg;

	size = 0;
	kay = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	indx = 0;
	while (indx < ac)
	{
		jay = 0;
		while (av[indx][jay])
		{
			size++;
			jay++;
		}
		size++;
		indx++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	indx = 0;
	while (indx < ac)
	{
		jay = 0;
		while (av[indx][jay])
		{
			arg[kay] = av[indx][jay];
			jay++;
			kay++;
		}
		arg[kay] = '\n';
		kay++;
		indx++;
	}
	arg[kay] = '\0';
	return (arg);
}
