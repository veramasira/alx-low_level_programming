#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: usually 0 (success)
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

	int bytes = atoi(argv[1])i;

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
