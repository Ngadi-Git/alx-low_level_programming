#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a param
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t indx;

	if (array != NULL && action != NULL)
	{
		for (indx = 0 ; indx < size ; indx++)
			(*action)(array[indx]);
	}
}
