#include "main.h"
/**
 *_print_chessboard - print a chessboard (8 x 8)
 *@a: the array
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
	}
	_putchar('\n')
}
