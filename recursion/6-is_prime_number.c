#include "main.h"
/**
  * is_prime - Check if number is prime
  * @n: the number
  * @m: the iteration times
  *
  * Return: 1 for prime or 0 if not
  */
int is_prime(int n, int m)
{
	if (n <= 1)
		return (0);

	if (n % m == 0 && m > 1)
		return (0);

	if ((n / m) < m)
		return (1);

	return (is_prime(n, m + 1));
}
/**
  * is_prime_number - Returns if a number is prime
  * @n: the number
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
