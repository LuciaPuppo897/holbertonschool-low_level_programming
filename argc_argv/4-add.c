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
	int a;
	int c;
	int count = 0;

	if (argc == 1) /* si solo tiene ./ gcc y ningun num*/
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c <= argc; c++)
	{/*recorre*/
	for (a = 0; a < argc; a++)
	{
		if (isdigit(argv[c][a]) == 0) /**se fija si e sun digito y sino da error*/
		{
		printf("Error\n");
		return (1);
		}

		else count += atoi(argv[c]); /** transforma en intger los char y los suma*/
	}
	}
	printf("%d\n", count);
	return (0);
}
