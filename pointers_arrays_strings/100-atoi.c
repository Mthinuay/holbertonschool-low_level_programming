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

    /* If sign is negative and result is > INT_MAX + 1, it will wrap,
       but since we can't use long or special values, we rely on unsigned int */
    if (sign == -1 && result > 2147483648U)
        return (0);

    if (sign == 1 && result > 2147483647U)
        return (2147483647);

    if (sign == -1 && result == 2147483648U)
        return (-2147483648);

    return ((int)(sign * result));
}
