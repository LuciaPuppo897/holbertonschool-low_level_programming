#include "search_algos.h"
/**
 *_search - searchs in the array ina  linear way
 *@array: the array to search in
 *@size: the size of the array
 *@value: the value to search for
 *Return: index of value
 */
int _search(int *array, size_t size, int value)
{
size_t i;

if (!array)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
	printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
	if (array[i] == value)
	{
	return (i);
	}
}
return (-1);
}


/**
 *linear_search - searchs in the array ina  linear way
 *@array: the array to search in
 *@size: the size of the array
 *@value: the value to search for
 *Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
int valueind;

valueind = _search(array, size, value);
return (valueind);
}
