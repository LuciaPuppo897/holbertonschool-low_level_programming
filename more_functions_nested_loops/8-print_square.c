#include "main.h"
/**
  * print_square - Prints n squares according to n value
  * @size: The large and broad of the squere
  *
  * Return: always 0
  */
void print_square(int size)
{
	int x, y;
    char enterChar(void);

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				putchar(35);
			}

			putchar('\n');
		}
	}
}
