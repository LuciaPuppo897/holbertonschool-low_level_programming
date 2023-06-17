#include "main.h"
/**
  * print_sign - Checks if less or greater than 0
  * @n: The number to be checked
  *
  * Return: 1 for grater  0 for zero or -1 for anything else
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
