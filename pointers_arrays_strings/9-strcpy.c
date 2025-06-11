#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including terminating null byte
 * @dest: buffer where string is copied to
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
