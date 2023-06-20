#include "main.h"
#include <stdio.h>
/**
  * print_line - Draws a straight line according to a given number
  * @n: how many lines to draw
  *
  *	Return:0
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}

		putchar('\n');
	}
}
