#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Make numbers from 0 to 14 x10 times
 *
 * putchar(char)
 */
void more_numbers(void)
{
	char c;

	int i = 0;

	while (i <= 9)
	{
		for (c = 0; c <= 14; c++)
	{
		if (c > 9)
		_putchar(c / 10 + 48);
		_putchar(c % 10 + 48);
	}
		_putchar('\n');
		i++;
	}
}
