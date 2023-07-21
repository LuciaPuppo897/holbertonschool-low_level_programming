#include "main.h"
/**
* call_functions - call the needed function
*@t_formt: the specific format
*@args: arguments
*Return: a pointer to that function
*/

int call_functions (char t_formt, va_list args)

{
	int i = 0;
	int count = 0;

form_t specifiers[] = {
	{'s', print_s},
	{'c', print_c},
	{'d', print_d},
	{'i', print_d},
	{0, NULL},
};

while (specifiers[i].form)
{
if (t_formt == specifiers[i].form)
	{
	count += specifiers[i].f(args);
    }
    i++;

  if (count == 0)
	{
	count += _putchar('%');
    count += _putchar (t_formt);

}
}
	return (count);
}
