#include <stdio.h>
#include "lists.h"

/**
 * first - proto
 *
 * Description: it applys the construction attribute to the first
 * so that its executable before main()
 */

void first(void) __attribute__ ((constructor));

/**
 * first - entry point
 *
 * Description: prints a sentence before the main function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
