#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 *print_d - prints an integer in base 10
 *@args: the argumetns it receives
 *Return: amount of printed chars
 */
int print_d(va_list args)
{
	long int num = va_arg(args, int);
	long int digits_ = 0;
	int div = 1;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num < 10)	
		return (count += _putchar(num + '0'));

	digits_ = num;

	while (digits_ > 9)
	{		
		div *= 10;
		digits_ /= 10;
	}

  while (div >= 1)
	{
	count += _putchar('0' + ((num / div) % 10));
	div /= 10;
	}
  return(count);
}

