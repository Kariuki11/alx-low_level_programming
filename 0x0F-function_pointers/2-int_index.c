#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array:array to be searched
 * @size:size of arrays
 * @cmp:pointer to functions
 * Return: integer on success and -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int srh;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
		return (-1);
	for (srh = 0 ; srh < size ; srh++)
	{
		cmp(array[srh]);
		if (cmp(array[srh]) == 1)
			return (srh);
	}
	return (-1);
}
