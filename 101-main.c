#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked varr1 from an array of integers
 *
 * @array: Array to convert to a doubly linked varr1
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created varr1. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *varr1;
    listint_t *node;
    int *temp1;

    varr1 = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        temp1 = (int *)&node->n;
        *temp1 = array[size];
        node->next = varr1;
        node->prev = NULL;
        varr1 = node;
        if (varr1->next)
            varr1->next->prev = varr1;
    }
    return (varr1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *varr1;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    varr1 = create_listint(array, n);
    if (!varr1)
        return (1);
    print_list(varr1);
    printf("\n");
    cocktail_sort_list(&varr1);
    printf("\n");
    print_list(varr1);
    return (0);
}