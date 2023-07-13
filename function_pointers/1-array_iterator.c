#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - fuction that calls another one in the array
 *@array: the array
 *@size: size of the array
 *@action: the fuction
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
