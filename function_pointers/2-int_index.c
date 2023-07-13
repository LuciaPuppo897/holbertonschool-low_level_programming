#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - compares two elements
 *@array: an array
 *@size: the size of the array
 *@cmp: the function that we call
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
{
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);

}
return (-1);
}
