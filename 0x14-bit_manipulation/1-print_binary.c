#include "main.h"

/**
 * print_binary - prints the number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, a = 0;
	unsigned long int cur;

	for (k = 63; k >= 0; k--)
	{
		cur = n >> k;

		if (cur & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}
