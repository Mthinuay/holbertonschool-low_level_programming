#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: Operator passed as argument
 * Return: Pointer to the correct function or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && s[0] != *(ops[i].op))
		i++;

	if (ops[i].op != NULL && s[1] == '\0')
		return (ops[i].f);

	return (NULL);
}

