#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a value
 * @n: the given value
 * Return: last digit
 *
 */
int print_last_digit(int n)
{       int result = n % 10;

	if (n < 0)
{
	result = (result * -1);

}
	_putchar(result + 48);
	return (result);
}
