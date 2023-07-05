#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_strdup - copy a string adn returns a pointer
 *@str: the porinter origin
 *
 *Return: 0
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	char *p;
	char *copy;
	p = malloc(sizeof(char) * size + 1);

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

