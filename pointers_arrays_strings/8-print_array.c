#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array
 *@a: array
 *@n: number of elemetns
 *
 */
void print_array(int *a, int n)
{
	int c;

for (c = 0; c <= n; c++)
	printf("%d", a[n]);
	if (c != n)
	printf(", ");

_putchar('\n');
}
