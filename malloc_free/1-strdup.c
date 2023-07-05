#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_strdup - copy a string adn returns a pointer
 *@str: the porinter origin
 *
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *p;
	char *copy;

	p = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL)
		return (NULL);

	if (p == NULL)
		return (NULL);

copy = p;
while (*str)
{
	*copy = *str;
	copy++;
	str++;
}
return (p);
}

