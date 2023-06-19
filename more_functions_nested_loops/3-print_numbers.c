#include "main.h"
/**
 *print_number - prints number 0 to 9
 *@n: char value
 *
 *Return: 0
 */
void print_numbers(void)
{
	char c = 48;

	while (c <= 57)
{
		_putchar(c);
		c++;
}
	_putchar('\n');
}
