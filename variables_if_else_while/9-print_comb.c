#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{

	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
