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
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
	}
	new_str[length] = '\0';
	return (new_str);

}
