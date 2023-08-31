#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int digit;
	char *last;

	digit = 1;
	last = (char *)&digit;

	if (*last == 1)
		return (1);

	return (0);
}	
