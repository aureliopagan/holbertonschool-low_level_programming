#include <stdio.h>
#include "dog.h"

/**
 * display_dog_info - Displays the details of a dog structure
 * @d: Pointer to the dog structure containing info to display
 *
 * Description: This function prints the name, age, and owner of a dog.
 *              If any field is NULL, it prints "(nil)" instead.
 *              The age is displayed with 6 decimal places for precision.
 */
void display_dog_info(struct dog *d)
{
    /* Check if the dog pointer is valid */
    if (d == NULL)
    {
        return;  /* Nothing to display if pointer is NULL */
    }

    /* Handle the dog's name field */
    if (d->name == NULL)
    {
        printf("Name: (nil)\n");  /* NULL name case */
    }
    else
    {
        printf("Name: %s\n", d->name);  /* Valid name case */
    }

    /* Always print age with consistent precision */
    printf("Age: %.6f\n", d->age);

    /* Handle the owner field similar to name */
    if (d->owner == NULL)
    {
        printf("Owner: (nil)\n");  /* NULL owner case */
    }
    else
    {
        printf("Owner: %s\n", d->owner);  /* Valid owner case */
    }
}
