#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints naem
 * @name:item to be printed
 * @f:pointer to name
 * Return :void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
