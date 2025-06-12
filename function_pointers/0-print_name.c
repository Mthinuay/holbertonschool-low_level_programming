#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a given function pointer
 * @name: name to print
 * @f: function pointer to print function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

