#include "main.h"
/**
 *_isaplha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
int _isaplha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
