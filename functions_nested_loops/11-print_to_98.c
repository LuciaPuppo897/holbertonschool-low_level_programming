#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print n until 98
 *@n: number
 *
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
{
		while (i < 98)
		printf("%d, ", i++);
		printf("%d\n", i);
}
	else
{
	while (n >= 98)
		printf("%d, ", i--);
	printf("%d\n", i);
}
}
