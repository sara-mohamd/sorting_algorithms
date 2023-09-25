#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
/* Bitonic sort comparison direction macros */
#define UP 0
#define DOWN 1

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

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;


/* printing assistant features */
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


#endif /* SORT_H */