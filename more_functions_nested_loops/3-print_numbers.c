#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 *
 * You can only use _putchar twice in your code
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
