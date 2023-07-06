#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - gives a pointer to a d2 array
 * @width: largo
 * @height: ancho
 * Return: void
 */
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **p;
	int row;
	int col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(sizeof(int *) * height);

if (p == NULL)  /** declaro espacio para las filas*/
{
	return (NULL);
}
	for (row = 0; row < height; row++)
	{
	p[row] = (int *)malloc(sizeof(int) * width);
	if (p[row] == NULL) /* solo int porqur no es punter*/
	{
		for (col = 0; col < row; col++)
		{
			free(p[col]);
		}
		free(p);
	}
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			p[row][col] = 0;
		}

	}
	return (p);
}
