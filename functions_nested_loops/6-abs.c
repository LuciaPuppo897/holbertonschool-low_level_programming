#include "main.h"
#include <stdio.h>
/**
 *_abs - recibe a value return absolute value of n
 *@n: entery value
 *
 *Return: absolute value or 0
 */
int _abs(int n)
{

	if (n <= 0)
{
	printf("%d", n * -1);
}

	return(n);
}
