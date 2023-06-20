#include "main.h"
#include <stdio.h>
/**
  * print_line - Draws a straight line according to a given number
  * @n: how many lines to draw
  *
  * Return: empty 
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
