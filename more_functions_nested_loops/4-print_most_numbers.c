#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 or 4
 *
 *Return: Always 0
 */
void print_most_numbers(void)
{
	int c = 0;

		while (c <= '9')
{
			if (c != '2' && c != '4')
{
				_putchar(c);

}
		c++;
}
_putchar('\n');
}
