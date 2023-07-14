#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates an array of integers.
  *@min: the minimum value.
  *@max: the maximum value.
  *
  *Return: pointer to new array.
  *NULL if malloc fails.
  *NULL if min > max.
  */

int *array_range(int min, int max)
{
	int span, indx;
	int *ptr;

	span = 0;

	if (min > max)
		return (NULL);

	span = ((max + 1) - min);

	ptr = malloc(span * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (indx = 0; indx < span; indx++)
	{
		*(ptr + indx) = min + indx;
	}

	return (ptr);
}
