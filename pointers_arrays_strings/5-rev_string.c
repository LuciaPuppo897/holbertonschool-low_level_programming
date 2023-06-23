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
	int size = strlen(s);
	char change;

	for (int c = 0; c <= (size / 2); c++)
	{
		change = s[c];
		s[c] = s[(size - c)]; 
		s[(size -c)] = change;
	}
}
