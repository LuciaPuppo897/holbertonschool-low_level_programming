#include "main.h"
#include <stdio.h>
/**
 *main - print n of argument
 *@argc: the int
 *@argv: the char
 *Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
