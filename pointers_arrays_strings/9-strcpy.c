#include "main.h"
/**
 *_strcpy - copies a stray
 *@dest: char
 *@src: char
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';

	return (dest);

}
