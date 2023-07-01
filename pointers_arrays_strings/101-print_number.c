#include "main.h"
/**
 *print_number - prints an integer
 *@n: int
 *
 *Return: 0
 */
void print_number(int n)
{
	int result = n

	if (n < 48)
	{
		result = (result * -1);
	}
		_putchar(result + 48);
}
