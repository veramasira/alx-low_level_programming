#include "main.h"

/**
 * test_islower - Checks if a character is lowercase.
 * @c: The character to be checked
 *
 * Return: 1 if character is lower, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
