#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - add 2 values
 *@argc: int
 *@argv: char
 *Return: result or 1
 */

int main(int argc, char *argv[])
{
	int c;
	int count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c <= argc; c++)

	{
		if (isdigit(argv[c]) == 0)
		{
		printf("Error\n");
		return (1);
		}

	count += atoi(argv[c]);
	}
	printf("%d\n", count);
	return (0);
}
