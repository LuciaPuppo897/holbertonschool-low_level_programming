#include "main.h"
/**
 * _starlen_recursion - prints the length of a string
 *@s: the string
 *
 *Return: void
 */
int _starlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _starlen_recursion(s + 1));
}
