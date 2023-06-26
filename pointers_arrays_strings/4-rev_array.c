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

	for (i = a[n]; i != '\0'; ++i)
	{
    j++;
    }

	for (j = a[n]; j < i; j++, i--)
    {
    m = j;
	j = i;
    i = m;
    }
}
