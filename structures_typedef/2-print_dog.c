#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Displays the details of a dog structure
 * @d: Pointer to the dog structure containing info to display
 *
 * Description: This function prints the name, age, and owner of a dog.
 *              If any field is NULL, it prints "(nil)" instead.
 *              The age is displayed with 6 decimal places for precision.
 *              Returns nothing.
 */
void print_dog(struct dog *d)
{
    /* Check for NULL pointer first */
    if (d == NULL)
        return;

    /* Handle name field - print (nil) if NULL */
    printf("Name: %s\n", d->name ? d->name : "(nil)");

    /* Age always prints with 6 decimal precision */
    printf("Age: %.6f\n", d->age);

    /* Handle owner field same as name */
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
