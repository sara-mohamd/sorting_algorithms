#include "sort.h"


void swop_node_behnnd(listint_t **list, listint_t **tail, listint_t **shoker);
void cocktail_sort_list(listint_t **list);
void swop_node_ahood(listint_t **list, listint_t **tail, listint_t **shoker);

/**
 * swop_node_ahood - Swap a is node Replace doubly-linked list listint_t
 *     integer list with the node before it.
 * @list: a pointer to the first integer in a list that is doubly linked.
 * @tail: a pointing device to the doubly-linked list's tail.
 * @shoker: a reference to the cocktail shoker algorithm's swapp node.
 */
void swop_node_ahood(listint_t **list, listint_t **tail, listint_t **shoker)
{
listint_t *temp1 = (*shoker)->next;

if ((*shoker)->prev
!= NULL)
(*shoker)->prev->next = temp1;
else
*list = temp1;
temp1->prev = (*shoker)->prev;
(*shoker)->next = temp1->next;
if (temp1->next != NULL)
temp1->next->prev =
*shoker;
else
*tail = *shoker;
(*shoker)->prev = temp1;
temp1->next =
*shoker;
*shoker = temp1;
}

/**
 * swop_node_behnnd - Swap a node Replace doubly-linked listint_t
 *       list of integers and the node that follows it.
 * @list: a pointer to the first integer in a doubly-linked list.
 * @tail: a pointing device to the doubly-linked list's tail.
 * @shoker: a reference to the cocktail shoker algorithm's curr swapp node.
 */
void swop_node_behnnd(listint_t **list, listint_t **tail, listint_t **shoker)
{
listint_t *temp1 = (*shoker)->prev;

if ((*shoker)->next != NULL)
(*shoker)->next->prev = temp1;
else
*tail = temp1;
temp1->next = (*shoker)->next;
(*shoker)->prev = temp1->prev;
if (temp1->prev != NULL)
temp1->prev->next =
*shoker;
else
*list = *shoker;
(*shoker)->next = temp1;
temp1->prev = *shoker;
*shoker = temp1;
}

/**
 * cocktail_sort_list - a doubly-linked list  integers nam listint_t sort in
 *           using the cocktail shoker algorithm to sort in ascend order.
 * @list: a pointer to the head a doubly-linked list of type listint_t.
 */
void cocktail_sort_list(listint_t **list)
{
listint_t *tail, *shoker;
boolean shaken_not_stirred = false;

if (list == NULL ||
*list == NULL ||
(*list)->next == NULL)
return;

tail = *list;
while (tail->next !=
NULL)
tail = tail->next;

while (shaken_not_stirred == false)
{
shaken_not_stirred = true;
shoker = *list;
while (shoker !=
tail)
{
if (shoker->n > shoker->next->n)
{
swop_node_ahood(list, &tail, &shoker);
print_list((const listint_t *)*list);
shaken_not_stirred = false;
}
shoker = shoker->next;
}
shoker = tail->prev;
while (shoker != *list)
{
if (shoker->n < shoker->prev->n)
{
swop_node_behnnd(list, &tail, &shoker);
print_list((const listint_t *)*list);
shaken_not_stirred = false;
}
shoker = shoker->prev;
}
}
}