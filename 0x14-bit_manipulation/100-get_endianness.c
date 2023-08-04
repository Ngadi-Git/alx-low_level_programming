#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int s;
	char *chr;

	s = 1;
	chr = (char *) &s;

	return ((int)*chr);
}
