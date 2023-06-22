#include "main.h"
#include <string.h>
/**
 *print_rev - prints a reverse string
 *@s: string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int c = 0;
	int size = strlen(s);

	for (c = 0; c < size / 2; c++)
	{
		swap(str[c], str[ n - c -1 ]);
	}
}
