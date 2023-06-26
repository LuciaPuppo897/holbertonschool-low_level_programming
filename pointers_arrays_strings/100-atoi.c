#include <stdio.h>
#include "main.h"
/**
 *_atoi - change a string to an itn
 *@s: the string
 *
 *Return: always 0
 *
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    
    while (*s == ' ')
		s++;

    
    if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}

    
    while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
			s++;
		}
	else
	{
		break;
	}
	}

    return sign * result;
}

