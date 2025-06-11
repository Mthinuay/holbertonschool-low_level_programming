#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Helper function to check if char is a separator */
	int is_separator(char c)
	{
		char separators[] = " \t\n,;.!?\"(){}";
		int j;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (c == separators[j])
				return (1);
		}
		return (0);
	}

	/* Capitalize first char if lowercase */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');

	while (s[i] != '\0')
	{
		if (is_separator(s[i]) && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] = s[i + 1] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}
