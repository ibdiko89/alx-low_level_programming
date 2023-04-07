#include "main.h"

/**
 * get_endianness - code checks the endianness
 *name :ibrahim
 * Return: 0 if big endian
 *  1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *c;

	y = 1;
	c = (char *) &y;

	return ((int)*c);
}
