#include "sort.h"

/**
 * swaping_integrs - In an array, swap two integers.
 *
 * @i: The next integer to swap.
 *
 * @j: The first integer to swap.
 */
void swaping_integrs(int *j, int *i)
{
int tmp;
tmp = *j;
*j = *i;
*i = tmp;
}

/**
 * selection_sort - Sorting integer arrays in ascending order is recommended.
 * @array: a array a collection of integers.
 *
 * @size: The extent The size of the array.
 * Description:Each swap is followed by printing the array.
 */
void selection_sort(int *array, size_t size)
{
int *var;
size_t j, i;

if (array == NULL || size < 2)
return;

for (j = 0; j < size - 1; j++)
{
var = array + j;

for (i = j + 1; i < size; i++)
{
var = (array[i] < *var) ? (array + i) : var;
}

if ((array + j) != var)
{
swaping_integrs(array + j, var);
print_array(array, size);
}
}
}
