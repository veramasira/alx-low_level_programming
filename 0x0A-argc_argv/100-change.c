#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char  *argv[])
{
	int coins = 0;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}

		int money;

		money = _atoi(argv[argc - 1]);

		while (money > 0)
		{
			if (money % 25 == 0)
			{
				money -= 25;
			} else if (money % 10 == 0)
			{
				money -= 10;
			} else if (money % 5 == 0)
			{
				money -= 5;
			} else if (money % 2 == 0)
			{
				money -= 2;
			} else
			{
				money--;
			}
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
