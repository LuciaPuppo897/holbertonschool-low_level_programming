#include "main.h"
/**
 * factorial - gives the factorial of a num
 *@n : the num
 *
 *Return: factorial n
 */
int factorial(int n)
{
if (n == 0)
	return (1);
if  (n <= 0)
	return (-1);
else
	return (n * factorial(n - 1));
}
