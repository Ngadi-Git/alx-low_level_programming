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

	unsigned long int xr = n ^ m, nbits = 0;

	while (xr > 0)
	{
		nbits += (xr & 1);
		xr >>= 1;
	}

	return (nbts);
}
