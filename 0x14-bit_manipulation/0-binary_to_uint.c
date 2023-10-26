#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 * - There is one or more chars in the string @b that is not 0 or 1.
 * - @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int bi;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bit = b[i] - '0';
		result = (result << 1) | bi;
	}

	return (res);
}
