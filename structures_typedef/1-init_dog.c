#ifndef _HEADER_
#define _HEADER_
/**
 * init_og - dog information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: fourth member
 * Return: always 0
 */
void init_dog (struct dog *d, char *name, float age, char *owner)
{
  if (d =! NULL)
    {
      d->name = name;
      d->age = age;
      d_>owner = owner;
    }
}
#endif