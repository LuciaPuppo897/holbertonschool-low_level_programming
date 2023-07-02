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

	if (n < 0)

	{
		printf("\n");
		printf("\n");
	}

for (c = 0; c < n; c++)
{	printf("%d", a[c]);
	if (c != n - 1)   /** verifica si el elemento no es el ultimo para imprimir el , */
		printf(", ");
	if (c == n - 1)
		printf("\n");
}
}
