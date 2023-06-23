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
	int count = 1;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (count % 2 != 0)
		_putchar(str[c]);
		count++;
	}
_putchar('\n');
}

