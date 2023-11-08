#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-iterates array
 * @array:array to be iterated
 * @size:size of array
 * @action:pointer
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t loop;

	if (array != NULL && action != NULL)
	{
		for (loop = 0 ; loop < size ; loop++)
			action(array[loop]);
	}
}
