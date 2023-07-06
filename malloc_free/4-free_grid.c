#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees the grid function
 *@grid: the fuction
 *@height: parameter in the fuction
 *Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;
	for( i = 0; i < height; i++ )
	{
		free(grid[i]);
	}		
	free(grid);
}
