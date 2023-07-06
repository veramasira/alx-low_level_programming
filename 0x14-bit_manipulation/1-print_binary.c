#include "main.h"
#include <stdio.h>
/**
 * print_binary - Entry Point
 * Description: Prints of the binary equivalent of a number and decimal
 * @n: number to print in the binary
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
