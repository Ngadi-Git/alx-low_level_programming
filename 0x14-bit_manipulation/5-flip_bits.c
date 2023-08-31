#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_r, bts;

	x_r = n ^ m;
	bts = 0;

	while (x_r > 0)
	{
		bits += (x_r & 1);
		x_r >>= 1;
	}

	return (bits);
}
