#include "main.h"
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which containing a copy of the string
  *@str: pointer that points to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int lent, i;

	if (str == NULL)
	{
		return (NULL);
	}

	lent = 0;
	while (str[lent] != '\0')
	{
		lent++;
	}

	new_str = malloc(sizeof(char) * (lent + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lent; i++)
	{
		new_str[i] = str[i];
	}
	new_str[lent] = '\0';
	return (new_str);

}
