#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print n until 98
 *@n: number
 *
 */
void print_to_98(int n)
{
	for (i = n ; i <= 98; i++)
	{
		_printf(i);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
