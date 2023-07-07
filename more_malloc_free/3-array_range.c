#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - creates an array of int
 *@min: int
 *@max: int
 *
 *Return: pointer to conca string
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *rtn;

if (min > max)
	return (NULL);

rtn  = malloc(sizeof(int) * (max - min + 1));

	if (rtn == NULL)
		return (NULL);

while (min <= max) /**recorro*/
{
	rtn[i] = min;
	min++;
	i++;
}

	return (rtn);
}
