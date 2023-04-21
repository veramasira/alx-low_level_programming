#include "function_pointers.h"
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *arr;
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int bytes = atoi(argv[i]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
