#include "main.h"

/**
* print_chessboard- prints chessboard
* @a: 2D array
* Return: void.
*/

void print_chessboard(char (*a)[8])
{
	int row;
	int coloumn;

	for (row = 0; row < 8; row++)
	{
		for (coloumn = 0; coloumn < 8; coloumn++)
		{
			_putchar(a[row][coloumn]);
		}
		_putchar('\n');
	}
}
