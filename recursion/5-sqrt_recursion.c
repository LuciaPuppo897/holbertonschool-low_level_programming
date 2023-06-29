#include "main.h"
/**
 *_sqrt - calculate square root
 *@a: number
 *@b : second num
 *Return: natural root
 */
int _sqrt(int a, int b)
{
	int sqrt = b * b;
		if (sqrt == a)
			return (b);
		if (sqrt > a)
			return (-1);
		return (_sqrt(a, b + 1));

}

/**
 *_sqrt_recursion - returns natural value of root
 *@n : the number
 *
 *Return: natural root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
