#include "main.h"
/**
 *print_number - prints an integer
 *@n: int
 *
 *Return: 0
 */
void print_number(int n)
{
	unsigned int result = n;

	if (n < 0)
	{
		result = (result * -1);
		_putchar('-');
	}
	if ((result / 10) > 0)
		print_number(result / 10);

	_putchar((result % 10) + '0');
}
