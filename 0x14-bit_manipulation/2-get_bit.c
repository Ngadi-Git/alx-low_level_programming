#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int jth = 0;

	if (n == 0 && index < 64)
		return (0);

	while (jth <= 63)
	{
		if (index == jth)
		{
			return (n & 1);
		}

		n >>= 1;
		jth++;
	}

	return (-1);
}
