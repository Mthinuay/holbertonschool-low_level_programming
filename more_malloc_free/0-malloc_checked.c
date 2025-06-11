#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and checks for success
 * @b: size in bytes to allocate
 *
 * Return: pointer to allocated memory
 * If malloc fails, terminate process with status 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);

    return (ptr);
}
