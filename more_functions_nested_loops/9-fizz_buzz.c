#include "main.h"
#include <stdio.h>
/**
 * main - print numbers from 1 to 100 except miltplies of 3 and 5
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 || n % 5 != 0)
			printf("%d", n);
		printf(" ");

	}
		putchar('\n');
	return (0);
}
