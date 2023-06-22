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

	  while(s[c] != 0)
	    {
	     c++;
	    }
	for (c = 1; s[c]; c--)
	{
		_putchar(s[c] + 0);
	}
_putchar('\n');
}
