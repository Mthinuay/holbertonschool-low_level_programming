#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns length of a string
 * @s: The string to measure
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string from src to dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	name_len = _strlen(name);
	doggo->name = malloc(name_len + 1);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	_strcpy(doggo->name, name);

	owner_len = _strlen(owner);
	doggo->owner = malloc(owner_len + 1);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	_strcpy(doggo->owner, owner);

	doggo->age = age;

	return (doggo);
}

