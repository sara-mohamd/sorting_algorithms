#include "sort.h"

/**
 * swaping_integrs - Switch two of the inteiers in an array.
 *
 * @j: The first person to switch is.
 *
 * @i: The second exchanged inteier.
 *
 */

void swaping_integrs(int *j, int *i)
{
int temp1;

temp1 = *j;
*j = *i;
*i = temp1;
}

/**
 * bubble_sort - putting a group of numbers into ascending order.
 * @array: a Sortable array of integers is a collection.
 * @size: The dimensions of the size array.
 * Description: Each swap is followed by printing the array.
 */
void bubble_sort(int *array, size_t size)
{
size_t j, var2 = size;
boolean var = false;

if (array == NULL ||
size < 2)
return;

for (; var == false;)
{
var = true;
for (j = 0; j < var2 - 1; j++)
{
if (array[j] > array[j + 1])
{
swaping_integrs(array + j, array + j + 1);

print_array(array, size);
var = false;
}
}
var2--;
}
}