#include "main.h"
/**
 * more_numbers - Make numbers from 0 to 14 x10 times
 *
 * _putchar(char)
 */
void print_alphabet_x10(void)
{
	char c;

	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		i++;
		}
}
