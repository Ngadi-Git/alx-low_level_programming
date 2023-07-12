#include "main.h"
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int lent, ind;

	if (str == NULL)
		return (NULL);

	lent = 0;
	while (str[lent] != '\0')
	{
		lent++;
	}

	new_str = malloc(sizeof(char) * (lent + 1));

	if (new_str == NULL)
		return (NULL);

	for (ind = 0; ind < len; ind++)
		new_str[ind] = str[ind];

	new_str[lent] = '\0';
	return (new_str);

}
