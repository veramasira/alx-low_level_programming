#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv);
	return (0);
}
