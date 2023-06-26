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
	int j = 0;
	int i;

	for (i = n - 1; j < 1;)
	{
	j++, i--;
	m = a[j];
	a[j] = a[i];
	a[i] = m;
	}

	for (j = 0; i = n < i;)
	{
	j++;
	i++;
	a[i] = a[j];
	}
}
