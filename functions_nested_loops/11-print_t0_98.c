#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print n until 98
 *@n: number
 *
 */
void print_to_98(int n)
{
	for (n = 0 ; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
