#include "main.h"
#include <stdio.h>  /* For printf */

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 * 
 * Return: A pointer to the allocated memory.
 *         If malloc fails, terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    /* Try to allocate memory */
    ptr = malloc(b);

    /* If malloc fails, terminate with status 98 */
    if (ptr == NULL)
    {
        exit(98);
    }

    /* Return the pointer to the allocated memory */
    return ptr;
}

