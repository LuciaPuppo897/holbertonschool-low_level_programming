#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - stores new dog information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: fourth member
 * Return: nothing
 */
dog_t *new_dog(char *name, __attribute__((unused)) float age, char *owner)
{
 int namelen, ownlen,i;
 dog_t *dogg;
	namelen = ownlen = 0;
 while(name[namelen++])
	;
 while(owner[ownlen++])
	;
	dogg = malloc(sizeof (dog_t));
	if (dogg == NULL)
	return (NULL);
	for (i = 0; i < namelen; i++)
		dogg->name[i] = name[i]; /**copy the name varible*/
	dogg->name = malloc(namelen * sizeof(dogg->name));
	if (dogg == NULL)
	return (NULL);
	dogg->owner = malloc(ownlen * sizeof(dogg->owner));
	if (dogg == NULL)
	return (NULL);
	for (i = 0; i < ownlen; i++) /**recorre para copiar*/
	dogg->owner[i] = owner[i]; /**copy the owner variable*/
		return (dogg);
}
