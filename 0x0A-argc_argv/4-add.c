#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_digit - checks if a given char is number or not
 * @a: input char
 * Return: int
 **/

int check_digit(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main -  program that adds positive numbers
 * @argc: arguement count
 * @argv: argument vector
 * Return: int
 **/

int main(int argc, char *argv[])
{
	int i, num, res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		num = check_digit(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		res += num;
	}
	printf("%d\n", res);
	return (0);
}
