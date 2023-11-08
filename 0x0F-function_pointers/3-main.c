#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: array with the args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
