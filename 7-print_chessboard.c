#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * This function writes a single character to standard output using write.
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

/**
 * main - entry point to test print_chessboard
 *
 * This function initializes an 8x8 chessboard and calls print_chessboard to
 * display it.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};
	print_chessboard(board);
	return (0);
}
