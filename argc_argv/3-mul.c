#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - multiplies 2 values
 *@argc: int
 *@argv: char
 *Return: result or 1
 */

int main(int argc, char *argv[])
{
	int a;
	int	b;

		if (argc < 3)
		{
		printf("Error\n");
	return (1);
		}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);


}
