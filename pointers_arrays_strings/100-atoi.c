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
	unsigned int result = 0;
	int isi = 0;

	while (*s)
	{
		if (*s == '-')
			{
				sign *= -1;
				s++;
			}
		else if (*s >= '0' && *s <= '9')
		{
			isi = 1;
			result = (result * 10) + (*s - '0');
			s++;
		}
		else if (isi == 1)
		{
			break;
		}

		else
		s++;
	}
		result *= sign;
	return (result);
}

