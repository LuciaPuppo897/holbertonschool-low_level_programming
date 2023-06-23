#include "main.h"
/**
 *puts2 - print every so 2
 *@str: string
 *
 *Return: void
 */
void puts2(char *str)
{
	int c;
	int count = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 != 0)
		_putchar(str[c]);
		count++;
	}
_putchar('\n');
}

