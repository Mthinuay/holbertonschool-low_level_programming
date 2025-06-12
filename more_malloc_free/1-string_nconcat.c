#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings, using at most n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1, len2, total_len, i;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    total_len = len1 + n;

    concat = malloc(total_len + 1); /* +1 for null terminator */
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (i = 0; i < n; i++)
        concat[len1 + i] = s2[i];

    concat[total_len] = '\0';

    return (concat);
}
