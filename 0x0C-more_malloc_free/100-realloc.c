#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1;
	char *prev_ptr;
	unsigned int indx;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pt1 = malloc(new_size);
	if (!pt1)
		return (NULL);

	prev_ptr = ptr;

	if (new_size < old_size)
	{
		for (indx = 0; indx < new_size; indx++)
			pt1[indx] = prev_ptr[indx];
	}

	if (new_size > old_size)
	{
		for (indx = 0; indx < old_size; indx++)
			pt1[indx] = prev_ptr[indx];
	}

	free(ptr);
	return (pt1);
}
