#include <stdio.h>
#include "main.h"
/**
 * times_table - prints table from 0 to 9
 *
 * Return: always 0 (success)
 */
void times_table(void)
{
int n;
	int m;
	int firstdigit;
	int seconddigit;
	int r;
for (n = 0; n < 10; n++)
{
	for (m = 0; m < 10; m++)
{
		r = n * m;
		firstdigit = r / 10;
	    seconddigit = r % 10;
			if (r <= 9 && m != 0)
{
				_putchar(44);
				_putchar(32);
				_putchar(32);
}
			if (r > 9 && m != 0)
{
				_putchar(44);
				_putchar(32);
}
			if (r > 9)
{

				_putchar(firstdigit + 48);
				_putchar(seconddigit + 48);

}
}
}
		_putchar('\n');
}
