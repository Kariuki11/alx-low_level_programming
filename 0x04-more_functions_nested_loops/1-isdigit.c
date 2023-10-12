#include "main.h"

/**
 * _isdigit - return true if digit
 * @c:is the parameter
 * Return: 1 if sucess 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
