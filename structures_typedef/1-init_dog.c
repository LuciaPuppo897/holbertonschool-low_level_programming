#include <stdio.h>
#include "dog.h"
/**
 * init_dog - dog information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: fourth member
 * Return: always 0
 */
void init_dog (struct dog *d, char *name, float age, char *owner)
{
  if (d != NULL)
    {
    d->name = name;
    d->age = age;
    d->owner = owner;
    }
}
