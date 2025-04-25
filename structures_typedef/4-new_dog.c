#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Creates and sets up a new dog structure
 * @name: Pointer to dog's name string
 * @age: Floating point value for dog's age
 * @owner: Pointer to owner's name string
 *
 * Return: Pointer to allocated dog struct, NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_pup;
    int len_name = 0, len_owner = 0;
    int counter;

    /* Calculate length of name string */
    while (name[len_name])
        len_name++;

    /* Calculate length of owner string */
    while (owner[len_owner])
        len_owner++;

    /* Allocate memory for dog structure */
    new_pup = malloc(sizeof(dog_t));
    if (!new_pup)
        return (NULL);

    /* Allocate and verify memory for name */
    new_pup->name = malloc(len_name + 1);
    if (!new_pup->name)
    {
        free(new_pup);
        return (NULL);
    }

    /* Allocate and verify memory for owner */
    new_pup->owner = malloc(len_owner + 1);
    if (!new_pup->owner)
    {
        free(new_pup->name);
        free(new_pup);
        return (NULL);
    }

    /* Copy name string */
    for (counter = 0; counter < len_name; counter++)
        new_pup->name[counter] = name[counter];
    new_pup->name[len_name] = '\0';

    /* Copy owner string */
    for (counter = 0; counter < len_owner; counter++)
        new_pup->owner[counter] = owner[counter];
    new_pup->owner[len_owner] = '\0';

    new_pup->age = age;

    return (new_pup);
}
