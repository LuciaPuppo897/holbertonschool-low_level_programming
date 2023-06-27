#include "main.h"
/**
 *_strchr - find a char in a string
 *@s: the string
 *@c: char
 *Return: null
 *
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{	
	if (*s == c)

    return (s);
	s++;
	if (*s == c)
		return (s);
	return ('\0');
	}
}
