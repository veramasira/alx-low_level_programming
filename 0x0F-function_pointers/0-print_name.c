#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: name to print
 * @f: function to used
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return;

	f(name);
}
