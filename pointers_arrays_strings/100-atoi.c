#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	/* Count signs before number */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	/* Convert number */
	while (s[i] >= '0' && s[i] <= '9')
	{
		found_digit = 1;
		result = result * 10 + (s[i] - '0');
		i++;
	}

	if (!found_digit)
		return (0);

	/* Check for INT_MIN */
	if (sign == -1 && result == 2147483648U)
		return (-2147483648);

	/* Cap values beyond INT_MAX */
	if (sign == 1 && result > 2147483647U)
		return (2147483647);

	return ((int)(sign * result));
}
