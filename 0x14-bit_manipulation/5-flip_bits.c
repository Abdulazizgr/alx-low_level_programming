#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int an = n ^ m;
	unsigned int nm = 0;

	while (an > 0)
	{
		nm += an & 1;
			an >>= 1;
	}

	return (nm);
}
