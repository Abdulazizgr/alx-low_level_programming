#include <stdlib.h>
#include <time.h>
/*
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 *
 * betty style doc for function main goes there
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code ges there */
		return (0);
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
		return (0);
}
