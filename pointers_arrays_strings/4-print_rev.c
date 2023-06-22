#include "main.h"
/**
 *_print_rev - prints a reverse string
 *@s: string
 *
 *Return: void
 */
void _print_rev(char *s)
{
	int c = 0;

	  while(s[c] != 0)
	    {
	     c++;
	    }
	for (c = 0; s[c]; c--)
	{
		_putchar(s[c] + 0);
	}
_putchar('\n');
}
