#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: total number of elements in the array
  * @size: the size of elements of the array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to the memory allocated if successful.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int indx;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (indx = 0; indx < (nmemb * size); indx++)
	{
		*((char *)(ptr) + indx) = 0;
	}

	return (ptr);
}
