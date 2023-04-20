#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of intergers passed to the funtion.
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index > 0 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
