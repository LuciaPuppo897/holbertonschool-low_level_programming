#include "main.h"
/**
 *_strlen - length of s
 *@s: int
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	count++;

	return (count);
}
