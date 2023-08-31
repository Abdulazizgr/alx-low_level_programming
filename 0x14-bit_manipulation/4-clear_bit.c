#include "main.h"

/**
 * clear_bit - Clears a bit
 * @n: Pointer to the number
 * @index: Index of the bit to be cleared
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int an;
	if (index > 63)
		return (-1);

	an = ~(1UL << index);
	*n = *n & an;

	return (1);
}
