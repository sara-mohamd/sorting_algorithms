#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>




/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Number kept in the node
 * @prev: pointer to the list's first element
 * @next: Pointer to the list's following element
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/**
 * enum boolean - Counting up the Boolean values.
 * @false: makes 0.
 * @true: Exactly 1.
 */
typedef enum boolean
{
false = 0,
true
} boolean;

/* printing assistant features */
void merge_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void shell_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
#endif /* SORT_H */