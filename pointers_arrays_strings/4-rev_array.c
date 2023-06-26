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
	int *j;
	int i;
	int aux;

	for (i = a[n]; a[n] != '\0'; n++)
	{
		j++;
	}

	for (m = 0; m < i / 2; j++)
	{
	aux = a[m];
	a[m] = *j;
	*j = aux;
	j--;

	}
}
