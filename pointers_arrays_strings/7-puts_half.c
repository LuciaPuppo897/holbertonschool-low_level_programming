#include "main.h"
#include <string.h>
/**
 *puts_half - prints half a string
 *@str: string
 *
 *
 */
void puts_half(char *str)
{
int c;
int size = 0;

while (str[size] != '\0')
		{
		size++;
		}
	size++;
	for (c = size / 2; str[c] != '\0'; c++)
	_putchar(str[c]);
_putchar('\n');
}
