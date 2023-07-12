#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of the array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *arrays;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arrays = malloc(size * sizeof(char));


	if (arrays == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arrays[i] = c;

	return (arrays);

}
