#include "main.h"

/**
 * _islower - Check for lowercase alphabet.
 * @c: The character to be checked.
 * Return: if character is lowercase, otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
        	return (1);
    else
        return (0);
}
