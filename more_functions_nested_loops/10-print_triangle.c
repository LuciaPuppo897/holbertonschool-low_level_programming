#include "main.h"
#include <stdio.h>
/**
  * print_triangle - Prints n squares according to n value
  * @size: The large and broad of the squere
  *
  * Return: always 0
  */
void print_triangle(int size)
{
int m;
int n;
int o;

        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (m = 0; m < size; m++)
                {
                        for (n = size -1; n > 1; n--)
                        {
                                _putchar(32);
                        }

                        for (o = 0; o <= m; o++)
						{
								_putchar(35);
						}
                        _putchar('\n');
                }
        }
						
}

