#include "main.h"
/**
 *print_number - prints an integer
 *@n: int
 *
 *Return: 0
 */
void print_number(int n)
{

	if (n < 48)
	_putchar ((n * -1) + 0);
	else
	_putchar(n + 0);
}
