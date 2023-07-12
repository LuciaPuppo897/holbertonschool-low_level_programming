#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees the dog nction
 *@d: pointer
 *Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)

	{
		free(d->owner);
		free(d->name);
		free(d);
	}

}
