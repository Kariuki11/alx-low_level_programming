#include <stdio.h>
/**
 * add - adds numbers
 * @a: first input
 * @b: second input
 * Return: 0 for success
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - substracts variables
 * @a: first input
 * @b: second input
 * Return: 0 for success
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies numbers
 * @a: first input
 * @b: second input
 * Return: 0 for success
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - performs division
 * @a: first input
 * @b: second input
 * Return: 0 for success
 */
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - performs modulo operation
 * @a: first input
 * @b: second input
 * Return: 0 for success
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
