#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - stores new dog information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: dogg
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int namelen, ownlen, i;
	dog_t *dogg;

	namelen = strlen(name) + 1;
	ownlen = strlen(owner) + 1;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
	return (NULL); /**nuevo puntero*/

	/**copy the name varible*/
	dogg->name = malloc(namelen * sizeof(char));
	if (dogg == NULL)
	{		free(dogg);
	return (NULL);
	}
	for (i = 0; i < namelen; i++)
		dogg->name[i] = name[i];

	dogg->age = age;

	dogg->owner = malloc(ownlen * sizeof(char));

	if (dogg == NULL)
	{		free(dogg->name);
		free(dogg);
	return (NULL);
	}
	for (i = 0; i < ownlen; i++) /**recorre para copiar*/
	dogg->owner[i] = owner[i]; /**copy the owner variable*/

	return (dogg);
}
