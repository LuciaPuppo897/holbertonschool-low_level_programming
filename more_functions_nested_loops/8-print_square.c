#include "main.h"
#include <stdio.h>
/**
  * print_square - Prints n squares according to n value
  * @size: The large and broad of the squere
  *
  * Return: always 0
  */
void print_square(int size)
{
int x;
int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
