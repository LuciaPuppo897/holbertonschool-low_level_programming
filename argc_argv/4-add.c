#include <stdio.h>
#include <ctype.h>
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
	int c;
	int count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c < argc; c++)

		{
	for	(a = 0; a < argc; a++)

			{
		if (isdigit(argv[a][c]) == 0)
		{
		printf("Error\n");
		return (1);
		}
			}
	count += atoi(argv[a]);
		}
	printf("%d\n", count);
	return (0);
}
