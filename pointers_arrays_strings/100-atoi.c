#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;
	int found_digit = 0;

	/* Process all characters before the number */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		i++;
	}

	/* Convert digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		found_digit = 1;

		/* Check for overflow */
		if (num > (unsigned int)((2147483647 - (s[i] - '0')) / 10))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}

		num = num * 10 + (s[i] - '0');
		i++;
	}

	if (!found_digit)
		return (0);

	if (sign == -1 && num > 2147483648U)
		return (-2147483648);

	return ((int)(num * sign));
}
