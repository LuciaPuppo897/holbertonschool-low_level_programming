#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - Print the sum of two diagonals of a square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i, suma = 0, sumb = 0;

	for (i = 0; i < size; i++)
	{
		suma += a[(size + 1) * i];
		sumb += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", suma, sumb);
}
