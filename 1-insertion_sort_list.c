#include "sort.h"

/**
 * swop_nodas - Change nodas in a doubly-linked list of type listint_t.
 *
 * @len: a pointing at the top of the doubly-linked list.
 *
 * @no1: a identifier for the swap's initial node.
 *
 * @no2: the next node to switch to.
 */
void swop_nodas(listint_t **len, listint_t **no1, listint_t *no2)
{
(*no1)->next = no2->next;
if (no2->next !=
NULL)
no2->next->prev = *no1;
no2->prev = (*no1)->prev;
no2->next = *no1;
if ((*no1)->prev !=
NULL)
(*no1)->prev->next = no2;
else
*len = no2;
(*no1)->prev = no2;
*no1 = no2->prev;
}

/**
 * insertion_sort_list - Sorting is done on a doubly linked list of integers.
 *
 * @list: the first integer in a doubly-linked list, indicated by a pointer.
 *
 * Description: After each switch, the list is printed.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *item, *ele1, *temp1;

if (list == NULL || *list == NULL ||
(*list)->next == NULL)
return;

for (item = (*list)->next; item != NULL; item = temp1)
{
temp1 = item->next;
ele1 = item->prev;
while (ele1 != NULL && item->n < ele1->n)
{
swop_nodas(list, &ele1, item);
print_list((const listint_t *)*list);
}
}
}