#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of first matching element, or -1 if none found or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

