#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - prints sum of a and b
 * @a:first integer
 * @b:second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - multiplies numbers
 * @a:first integer
 * @b:second integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prints product
 * @a:first integer
 * @b:second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a:first int
 * @b:second int
 * Return: result on success
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -prints remainder
 * @a:first int
 * @b:second int
 * Return: remainder on success
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
