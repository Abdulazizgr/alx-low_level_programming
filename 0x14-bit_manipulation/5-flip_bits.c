#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: First num
 * @m: Second num
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int an = 0;

	while (res != 0)
	{
		an += res & 1;
		res >>= 1;
	}

	return (an);
}
