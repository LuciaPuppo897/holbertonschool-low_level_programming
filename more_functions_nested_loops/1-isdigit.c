#include "main.h"
/**
 * _isdigit - check if int is a digit
 * @c: the int to check
 *
 * Return: 1 for digit or 0 if else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
