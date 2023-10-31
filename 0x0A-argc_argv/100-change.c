#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: count
 * @argv: vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int ncoins = 0;
	int cents = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		ncoins += cents / 25;
		cents %= 25;

		ncoins += cents / 10;
		cents %= 10;

		ncoins += cents / 5;
		cents %= 5;

		ncoins += cents / 2;
		cents %= 2;

		ncoins += cents;
		cents %= 1;

	}
	printf("%d\n", ncoins);
	return (0);
}
