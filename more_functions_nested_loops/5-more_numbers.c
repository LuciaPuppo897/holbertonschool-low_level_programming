#include "main.h"
/**
 * more_numbers - Make numbers from 0 to 14 x10 times
 *
 * putchar(char)
 */
void print_more_numbers(void)
{
	char c;

	int i = 0;

	while (i <= 9)
	{
		for (c = '48'; c <= '57'; c++)
	{
		putchar(c);
	}
		putchar('\n');
		i++;
		}
}
