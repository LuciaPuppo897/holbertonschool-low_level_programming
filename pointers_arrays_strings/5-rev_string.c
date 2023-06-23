#include "main.h"
#include <string.h>
/**
 *print_rev - prints a reverse string
 *@s: string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int size = 0;
	int c = 0;
	char *value, change;

	while (s[c] != '\0')
	{
		size++;
	}
	while (c < size--)
	{
		change = s[c];
		s[c]= *value;
		*value = change;
	
	}
}
