#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a varr1 of integers
 *
 * @varr1: The varr1 to be printed
 */
void print_list(const listint_t *varr1)
{
    int i;

    i = 0;
    while (varr1)
    {
        if (i > 0)
            printf(", ");
        printf("%d", varr1->n);
        ++i;
        varr1 = varr1->next;
    }
    printf("\n");
}