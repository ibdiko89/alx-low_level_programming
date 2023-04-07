#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * required to  flip to get to  one number to another
 * @n: number one.
 * @m: number two.
 *name:ibrahim
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int kbits;

	for (kbits = 0; n || m; n >>= 1, m >>= 1)

	{
		if ((n & 1) != (m & 1))
			kbits++;
	}

	return (kbits);
}
