#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Make numbers from 0 to 14 x10 times
 *
 * putchar(char)
 */
void print_more_numbers(void)
{
	char c;

	int i = 0;

	while (i <= 9)
	{
		for (c = 0; c <= 14; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		i++;
		}
}
