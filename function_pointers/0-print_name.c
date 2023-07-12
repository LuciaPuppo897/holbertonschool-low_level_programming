#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - pritns a name
 *@name: a parameter
 *@f: a pointer to a fuction
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
