#include "main.h"
#include <string.h>
/**
 *
 *puts_half - prints half a string
 *@str: string
 *
 *
 */
void puts_half(char *str)
{
	int c;
	int size = strlen(str) - 1;
	size++;
	:wq
	for (c = size / 2; str[c] != '\0'; c++)
	 _putchar(str[c]);

	_putchar('\n');
}
