#include "main.h"

/**
 * power - Calculates the power of a number.
 * @base: The base of the exponent.
 * @exponent: The exponent.
 *
 * Return: The value of (base ^ exponent).
 */
unsigned long int power(unsigned int base, unsigned int exponent)
{
	unsigned long int result = 1;

	for (unsigned int i = 0; i < exponent; i++)
		result *= base;

	return (result);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int ans = power(2, (sizeof(unsigned long int) * 8) - 1);
	char an = 0;

	while (ans > 0)
	{
		if ((n & ans) == ans)
		{
			an = 1;
			_putchar('1');
		}
		else if (an == 1 || ans == 1)
		{
			_putchar('0');
		}

		ans >>= 1;
	}
}
