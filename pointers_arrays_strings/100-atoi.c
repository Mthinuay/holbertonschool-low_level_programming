#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: integer value parsed from the string, or 0 if none found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, started = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;

			/* check overflow without using long or hardcoded limits */
			if (num > (num * 10 + (s[i] - '0')) / 10)
				return (sign == 1 ? num : -num);

			num = num * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (sign * num);
}
