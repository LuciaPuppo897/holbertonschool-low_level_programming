#include "main.h"
#include <stdio.h>
/**
 *main - print n of argument
 *@argc: the int
 *@argv: the char
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int  i;

	for (i = 0; i < argc ; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
