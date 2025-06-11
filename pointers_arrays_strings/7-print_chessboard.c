#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a 2D array of chars (8x8)
 *
 * Description: prints an 8x8 chessboard where each row is printed
 * followed by a newline.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
