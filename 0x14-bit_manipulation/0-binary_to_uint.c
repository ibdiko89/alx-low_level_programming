#include "main.h"
#include <stddef.h>
/*
 * converts binary to bits 0or 1
 * name :ibrahim
 * returns 0 if erro
 * using main.h
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (b == NULL)
		return (0);

	for (bit = 1; *b; b++, bit <<= 1)
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			result |= bit;
	}

	return (result);
}

