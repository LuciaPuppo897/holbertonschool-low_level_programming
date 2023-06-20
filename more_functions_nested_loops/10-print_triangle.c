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

        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (m = 0; m < size; m++)
                {
                        for (y = n; n < size; n--)
                        {
                                _putchar(35);
                        }

                        _putchar('\n');
                }
        }
