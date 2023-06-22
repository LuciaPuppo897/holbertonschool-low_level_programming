#include "main.h"
/**
 *_puts - prints a string
 *@str: string
 *
 *Return: void
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c]; c++)
	_putchar(str[c]);
}
