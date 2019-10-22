#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Free memory allocated
* @d: dog structure
*
*/
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
