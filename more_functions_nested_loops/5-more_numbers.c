#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 * You can only use _putchar three times in your code
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
