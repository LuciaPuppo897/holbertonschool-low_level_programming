#include "main.h"
/**
 *_pow_recursion - power to of a num
 *@y: power
 *@x: base
 *Return: power to
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	
}
