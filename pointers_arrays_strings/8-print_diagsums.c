#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: pointer to the first element of the square matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Description: The function calculates the sum of the primary diagonal
 * (top-left to bottom-right) and the secondary diagonal
 * (top-right to bottom-left), then prints them.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];           /* Primary diagonal */
		sum2 += a[i * size + (size - 1 - i)]; /* Secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
