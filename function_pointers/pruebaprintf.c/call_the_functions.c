#include "main.h"
/**
* call_functions - call the needed function
*@specifier: the specific format
*Return: a pointer to that function
*/

int (*call_functions (const char *spc))(va_list)
{
form_t specifiers[] = {
	{"s", print_s},
	{"c", print_c},
	{"d", print_d},
	{"i", print_i},
	{"%", print_percent}
	{NULL, NULL},
};

int i;
while (specifiers[i].form) 
{
    if (strcmp(spc, specifiers[i].form) == 0) // compara los elementos del array con los formatos que nos pasan
    {
		return =(specifiers[i].f); 
        
    }
    i++;
}
return (NULL);
}
