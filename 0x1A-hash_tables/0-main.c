#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
<<<<<<< HEAD
 * main - check the code for ALX-Africa Cohort C 1 Students.
=======
 * main - check the code for ALX-Africa Cohort 20 Students.
>>>>>>> b026e1938e849006af9d1c941f578fa459185a9b
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
