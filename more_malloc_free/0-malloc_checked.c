#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array
 *@b: int
 *
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit (98);
	}
	return (str);
}	
