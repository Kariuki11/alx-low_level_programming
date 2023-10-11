#include "main.h"
#include <unistd.h>

/**
 * print_alphabet Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char C = 'a';

	while (C <= 'Z')
	 {
	 	_putchar(C);
       		C++;

	 }
	 _putchar('\n');

}	 
