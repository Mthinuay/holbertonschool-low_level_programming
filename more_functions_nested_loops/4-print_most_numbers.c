#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4,
 * followed by a new line
 *
 * You can only use _putchar twice in your code
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
