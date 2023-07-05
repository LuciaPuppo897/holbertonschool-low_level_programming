#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - copy a string adn returns a pointer
 *@str: the porinter origin
 *
 *Return: 0
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	char *p = (char *)malloc(sizeof(char) * size + 1);
	char *copy;

	if (p == NULL)
		return (NULL);

	if (size == NULL);
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

