#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of '0' and '1' characters.
 *
 * Return: The converted unsigned int value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, len, tmp;

	num = 0;
	tmp = 1;

	len = 0;

	if (b == '\0')
		return (0);

	while (b[len] != '\0')
		len++;

	len--;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * tmp;
		tmp = tmp * 2;
		len--;
	}

	return (num);
}
