#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @binary_str: points to a string of 0's and 1's
 * Return: decimal format of the binary
 * name :ibrahim code
 */
unsigned int binary_to_uint(const char *binary_str)
{
	unsigned int decimal_val = 0; /* decimal_val holds the decimal format */

	if (binary_str == NULL)
		return (0);

	while (*binary_str)
	{
		if (*binary_str == '1')
			decimal_val = (decimal_val << 1) | 1;
		else if (*binary_str == '0')
			decimal_val <<= 1;
		else
			return (0);
		binary_str++;
	}

	return (decimal_val);
}
