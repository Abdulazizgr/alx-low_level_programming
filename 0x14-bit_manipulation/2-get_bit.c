#include "main.h"

/**
 * get_bit - Returns the value
 * @n: The number to extract
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int an;

	if (index > 63)
		return (-1);

	an = (n >> index) & 1;

	return (an);
}
