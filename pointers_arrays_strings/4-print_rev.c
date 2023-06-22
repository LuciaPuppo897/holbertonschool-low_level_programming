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
	int c = 0;
	int size = strlen(s);

	for (c = size - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
_putchar('\n');
}
