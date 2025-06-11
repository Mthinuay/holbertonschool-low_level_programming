#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 */
void puts_half(char *str)
{
	int len = 0, i;

	/* Calculate the string length */
	while (str[len] != '\0')
		len++;

	/* If odd length, start from (len + 1) / 2 */
	if (len % 2 == 1)
		i = (len + 1) / 2;
	else
		i = len / 2;

	/* Print from i to end */
	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
