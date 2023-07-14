#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_func - a fuctions that calls the operations
 *@s: a char
 *
 *Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = { /** ops es el array*/
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op) /** la cantidad de cosas del string*/
	{
	if (strcmp(s, ops[i].op) == 0)
	{
	return (ops[i].f);
	}
	i++;
	}
	return (NULL);
}
