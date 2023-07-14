#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * strlent - calculates and returns the string length
 * @string: string
 *
 * Return: string length
 */
int strlent(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}


/**
 * string_nconcat - concatenates s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int number, length, i, j;

	number = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (number < 0)
		return (NULL);
	if (number >= strlent(s2))
		number = strlent(s2);

	length = strlent(s1) + number + 1;

	ptr = malloc(sizeof(*ptr) * length);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < number; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
