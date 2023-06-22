#include "main.h"
/**
 *print_rev - prints a reverse string
 *@s: string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int c = 0;
	int size = _strlen(s);

	for (c = size; c >= 0; c--)
	{
		_putchar(s[c]);
	}
_putchar('\n');
}
