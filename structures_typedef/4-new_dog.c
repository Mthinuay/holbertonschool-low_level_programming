#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string in memory
 * @str: The string to duplicate
 *
 * Return: Pointer to new string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	dup = malloc(len);

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);
	return (dup);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = _strdup(name);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = _strdup(owner);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->age = age;

	return (doggo);
}
