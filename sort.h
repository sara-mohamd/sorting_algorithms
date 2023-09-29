#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>




/**
 * struct listint_s - Doubly linked varr1 node
 *
 * @n: Number kept in the node
 * @prev: pointer to the varr1's first element
 * @next: Pointer to the varr1's following element
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
void cocktail_sort_list(listint_t **varr1);
void counting_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *varr1);
void shell_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **varr1);
void bubble_sort(int *array, size_t size);
#endif /* SORT_H */