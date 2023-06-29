#include "main.h"
/**
 *isprime - check the % of the div
 *@a: the num
 *@b: the divisor
 * Return: int
 */
int isprime(int a, int b)
{
	if (a <= 1)
		return (0);

	else(b == 1)
	{
		return (1);
	}
}
/**
 *is_prime_number - check if a numbr is prime
 *@n: the given num
 *Return: 1 if prime or 0
 */
int is_prime_number(int n)
{   int b;
	if (n % b == 0)
		return (0);
	else
		return (isprime(n, b - 1));
}
