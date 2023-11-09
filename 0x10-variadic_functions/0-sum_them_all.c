#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the same of all the parameters
 * @n: the number of parameters
 * @...: variables number of arguments
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0
		return 0;

	va_start(args, n);
	for (i = 0; i < n; i++) {
		sum += va_arg(args, int);
	}
	va_end(args);

	return sum;

}
