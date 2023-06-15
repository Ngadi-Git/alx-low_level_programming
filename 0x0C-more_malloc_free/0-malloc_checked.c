#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		_Exit(98);

	return (ptr);
}
