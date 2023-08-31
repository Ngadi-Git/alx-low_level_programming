#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of '0' and '1' characters.
 *
 * Return: The converted unsigned int value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp = 0;
	int ln = 0, base_two = 1;

	if (!b)
		return (0);

	while (b[ln] != '\0')
	{
		ln++;
	}

	ln--;

	while (ln >= 0)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			tmp += base_two;
		}

		ln--;
		base_two *= 2;
	}

	return (tmp);
}
