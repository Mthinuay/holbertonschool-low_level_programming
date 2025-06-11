#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: pointer to an 8x8 array of characters
 *
 * This function prints an 8x8 chessboard where each element is a character.
 * Each row is printed as 8 characters followed by a newline.
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
