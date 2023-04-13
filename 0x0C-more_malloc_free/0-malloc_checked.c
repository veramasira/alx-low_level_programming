#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{

	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
