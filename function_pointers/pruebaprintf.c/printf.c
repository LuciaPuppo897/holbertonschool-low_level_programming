#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
 *_printf - print f function
 *@format: format specifications
 *Return: alway success
 */
int _printf(const char *format, ...)
{
	const char *i;
	int *(func)(va_list);
int count = 0;
va_list(args);
va_start(args, format);

	for (i = format; *i != '\0'; i++)
	{
	if (*i == '%')
		{
		i++;
	func = call_function(*i);
			if (*i == '\0')
	{
	return (-1); // indicates error
	}
			else if (func == NULL) // didnt match any functions
			{
	_putchar(*(i - 1)); // if %+1 was not any specfic format
				putchar(*i);
				count += 2; // we print two things
			}
	else
	{
	count += func(args); // llama a la funcion que corresponda
	}
	}
	else
	{
	putchar(*i); /** si en ningun momento encuentra % */
	count++;
	}
    i++;
	}
	va_end(args);
return (count);
}
