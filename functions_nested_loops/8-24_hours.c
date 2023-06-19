#include "main.h"
/**
 * jack_bauer - prints a clock
 *
 * _putchar: prints hours minutes
 */
void jack_bauer(void)
{
	int h, i, m, n;

	for (h = 0; h <= 2; h++)
{
		for (i = 0; i <= 9; i++)
{
			if ((h <= 1 && i <= 9) || (h <= 2 && i <= 3))
{
				for (m = 0; m <= 5; m++)
{
					for (n = 0; n <= 9; n++)
{
						_putchar(h + '0');
						_putchar(i + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(n + '0');
						_putchar('\n');
}
}
}
}
}
}
