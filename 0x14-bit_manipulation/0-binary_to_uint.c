#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sindx = 0;
	int lent = 0, bin = 1;

	if (!b)
		return (0);

	while (b[lent] != '\0')
		lent++;

	lent--;

	while (lent >= 0)
	{
		if (b[lent] != '0' && b[lent] != '1')
			return (0);

		if (b[lent] & 1)
			sindx += bin;

		bin *= 2;
		lent--;
	}

	return (sindx);
}
