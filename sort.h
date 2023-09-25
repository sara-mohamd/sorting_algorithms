#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/* Sorting methods */
void quick_sort_hoare(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

/* printing assistant features */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


#endif /* SORT_H */