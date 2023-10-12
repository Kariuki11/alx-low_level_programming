#include "main.h"

/**
 * _isupper -returns letter in uppercase
 * @c:is the parameter
 * Return: 0  on failure or 1 on success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
