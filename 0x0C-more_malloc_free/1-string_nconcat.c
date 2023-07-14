#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int number, len, i, j;

	unsigned int length1, length2;

	length1 = 0;
	length2 = 0;
	number = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (number < 0)
		return (NULL);

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (number >= length2)
		number = length2;

	len = length1 + number + 1;
	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < number; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
