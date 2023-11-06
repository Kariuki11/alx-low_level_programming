#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -free dog
 * @d:dog to be freeds
 * Return:void
 */

void free_dog(dog_t *d)
{
	if (d != NULL);
		free(d);
}
