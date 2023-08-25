#include<stdio.h>

void priority(void) __attribute__ ((constructor));

/**
 * priority - Apply the constructor attribute to priority() so that it
 *   is executed before main()
 */
void priority(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
