#include "main.h"
/**
 * flip_bits - return the number of bits you would need to flip to get
 * from one number to other
 * @n: number
 * @m: flip other number
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
