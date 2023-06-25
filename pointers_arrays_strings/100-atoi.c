#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 *Return: always 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit = 0;
	while (*s == ' ')
	{
	if (*s >= '0' && *s <= '9')
	{
		result = ((result * 10) + (s - '0'));
		digit = 1;
	}
	else if (*s == '-' || *s == '+')
	{
		if (digit)
			break;
		if(*s == '-')
			sign *= -1;
	}
	else if (digit)	
	{
	 break; // si ve un + o - guarda los numeros y si es negativo conviert
		// en -1 para que luefo quede negatvo
	}
		s++;
	} //si es un numero lo imprime 
	return (sign * result);
}// si es negativo queda negativo sino positivo }
