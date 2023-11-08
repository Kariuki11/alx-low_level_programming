#include <stdio.h>
#include <stdlib.h>

/**
 * get_codes - print the opcodes
 * @a: main func's address
 * @n: bytes
 * Return: void
 */

void get_codes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - main function
 * @argc: number of args
 * @argv: array with the args
 * Return: 0(Success)
 */

int main(int argc, char **argv)
{
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("Error\n");
		exit(2);
	}
	get_codes((char *)&main, c);
	return (0);
}
