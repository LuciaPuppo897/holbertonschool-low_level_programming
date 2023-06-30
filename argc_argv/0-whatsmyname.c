#include "main.h"
#include <stdio.h>
/**
 *main - prints the name of the funtion
 *@argc: how many arguments are
 *@argv: the string
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s ", argv[0]);
	printf("\n");
	}
	return (0);
}

