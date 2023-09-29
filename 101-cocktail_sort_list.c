#include "sort.h"


void swop_node_behnnd(listint_t **list, listint_t **lastt, listint_t **rekosh);
void cocktail_sort_list(listint_t **list);
void swop_node_ahood(listint_t **list, listint_t **lastt, listint_t **rekosh);

/**
 * swop_node_ahood - Swap a is node Replace doubly-linked list listint_t
 *     integer list with the node before it.
 * @list: a pointer to the first integer in a list that is doubly linked.
 * @lastt: a pointing device to the doubly-linked list's lastt.
 * @rekosh: a reference to the cocktail rekosh algorithm's swapp node.
 */
void swop_node_ahood(listint_t **list, listint_t **lastt, listint_t **rekosh)
{
listint_t *temp1 = (*rekosh)->next;

if ((*rekosh)->prev
!= NULL)
(*rekosh)->prev->next = temp1;
else
*list = temp1;
temp1->prev = (*rekosh)->prev;
(*rekosh)->next = temp1->next;
if (temp1->next != NULL)
temp1->next->prev =
*rekosh;
else
*lastt = *rekosh;
(*rekosh)->prev = temp1;
temp1->next =
*rekosh;
*rekosh = temp1;
}

/**
 * swop_node_behnnd - Swap a node Replace doubly-linked listint_t
 *       list of integers and the node that follows it.
 * @list: a pointer to the first integer in a doubly-linked list.
 * @lastt: a pointing device to the doubly-linked list's lastt.
 * @rekosh: a reference to the cocktail rekosh algorithm's curr swapp node.
 */
void swop_node_behnnd(listint_t **list, listint_t **lastt, listint_t **rekosh)
{
listint_t *temp1 = (*rekosh)->prev;

if ((*rekosh)->next != NULL)
(*rekosh)->next->prev = temp1;
else
*lastt = temp1;
temp1->next = (*rekosh)->next;
(*rekosh)->prev = temp1->prev;
if (temp1->prev != NULL)
temp1->prev->next =
*rekosh;
else
*list = *rekosh;
(*rekosh)->next = temp1;
temp1->prev = *rekosh;
*rekosh = temp1;
}

/**
 * cocktail_sort_list - a doubly-linked list  integers nam listint_t sort in
 *           using the cocktail rekosh algorithm to sort in ascend order.
 * @list: a pointer to the head a doubly-linked list of type listint_t.
 */
void cocktail_sort_list(listint_t **list)
{
listint_t *lastt, *rekosh;
boolean shaken_not_stirred = false;

if (list == NULL ||
*list == NULL ||
(*list)->next == NULL)
return;

lastt = *list;
while (lastt->next !=
NULL)
lastt = lastt->next;

while (shaken_not_stirred == false)
{
shaken_not_stirred = true;
rekosh = *list;
while (rekosh !=
lastt)
{
if (rekosh->n > rekosh->next->n)
{
swop_node_ahood(list, &lastt, &rekosh);
print_list((const listint_t *)*list);
shaken_not_stirred = false;
}
rekosh = rekosh->next;
}
rekosh = lastt->prev;
while (rekosh != *list)
{
if (rekosh->n < rekosh->prev->n)
{
swop_node_behnnd(list, &lastt, &rekosh);
print_list((const listint_t *)*list);
shaken_not_stirred = false;
}
rekosh = rekosh->prev;
}
}
}