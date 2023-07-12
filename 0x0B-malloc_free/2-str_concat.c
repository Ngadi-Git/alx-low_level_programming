#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *str_concat - concatenates 2 strings.
  * a NULL string is treated as an empty string.
  *@s1: pointer to string.
  *@s2: pointer to string.
  *
  *Return: pointer to newly allocated memory which
  *has s1, s2 and null byte.
  *NULL on failure.
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int f_len, s_len, size, ind, j;
	char *new_str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	f_len = 0;
	while (s1[f_len] != '\0')
		f_len++;

	s_len = 0;
	while (s2[s_len] != '\0')
		s_len++;

	size = f_len + s_len;

	new_str = malloc((sizeof(char) * size) + 1);

	if (new_str == NULL)
		return (NULL);

	ind = 0;
	while (ind < f_len)
	{
		new_str[ind] = s1[ind];
		ind++;
	}

	j = 0;
	while (ind <= size)
	{
		new_str[ind] = s2[j];
		ind++;
		j++;
	}
	return (new_str);
}
