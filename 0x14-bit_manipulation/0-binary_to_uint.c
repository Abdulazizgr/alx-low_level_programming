#include "main.h"

/**
 * binary_to_uint - Converts a binary string to integer
 * @b: the binary string to convert
 *
 * Return: The decimal number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int num = 0;
        unsigned int k;

        if (b == NULL)
                return (0);

        for (k = 0; b[k] != '\0'; k++)
        {
                if (b[k] != '0' && b[k] != '1')
                        return (0);

                num = num * 2 + (b[k] - '0');
        }

        return (num);
}
