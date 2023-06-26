#include "main.h"
/**
 * reverse_array - print a reverse array
 * @a: array
 * @n: int
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int m;
	int j;
	int i;

	for (i = a[n]; a[n] != '\0'; n++)
	{
if (i > a[n])
--i;
	}

	for(i = a[n]; j < i; ++j, --i)
	{
	m = j;
	j = i;
	i = m;
	}
}
