#include "main.h"
/**
 *print_number - prints an integer
 *@n: int
 *
 *Return: 0
 */
void print_number(int n)
{

	if (n < 0)
	_putchar ((n * -1) + 48);
	else
	_putchar(n + 48);
}
