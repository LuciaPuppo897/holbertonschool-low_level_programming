#include "main.h"
/**
 *string_toupper - change lowercase to uppercase
 *@p : the pointer
 *
 *Return: char
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
		p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}

