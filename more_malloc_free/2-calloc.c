#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory or NULL if allocation fails
 *         or either parameter is zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *memory;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    memory = malloc(nmemb * size);
    if (memory == NULL)
    {
        return (NULL);
    }

    i = 0;
    while (i < nmemb * size)
    {
        memory[i] = 0;
        i++;
    }

    return (memory);
}

