#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')

	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);

}
