#include "main.h"

/**
 *_islower - func is to check for lowercase characters
 * @c: bis the int that will use for the argument of the functions
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}


