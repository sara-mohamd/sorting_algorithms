#include "sort.h"

void swaping_integrs(int *j, int *i);
int custom_partition(int *array, size_t size, int left, int right);
void quick_sort_lomuto(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swaping_integrs - In an array, swap two integers.
 *
 * @j: the initial swapped integer.
 *
 * @i: The next integer to be swapped.
 */
void swaping_integrs(int *j, int *i)
{
int tmp;
tmp = *j;
*j = *i;
*i = tmp;
}

/**
 * custom_partition - The subset of an integer array in the following
 * @array: the integer array collection.
 * @size: The size array's dimensions.
 *
 * @left: The starting index of the subset is utilized for sorting.
 * @right: The last index to order of the subset.
 *
 * Return: the partition's final index.
 */
int custom_partition(int *array,
size_t size, int left, int right)
{
int *ptr1, varx, vary;

ptr1 = array + right;
varx = vary = left;
while (vary < right)
{
if (array[vary] < *ptr1)
{
if (varx < vary)
{
swaping_integrs(array + vary, array + varx);
print_array(array, size);
}
varx++;
}
vary++;
}

if (array[varx] > *ptr1)
{
swaping_integrs(array + varx, ptr1);
print_array(array, size);
}
return (varx);
}


/**
 * quick_sort_lomuto - Recursion is used to implement the quicksort algorithm.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * @left: The array partition order's starting index.
 * @right: The array partitioning order's last index.
 *
 * Description: employs the Lomuto partitioning method.
 */

void quick_sort_lomuto(int *array, size_t size,
int left,
int right)
{
int parts;

if (right - left > 0)
{
parts = custom_partition(array,
size, left, right);
quick_sort_lomuto(array, size, left, parts - 1);
quick_sort_lomuto(array, size, parts + 1, right);
}
}

/**
 * quick_sort - Sort integer arrays in an ascending order.
 * @array: a array a collection of integers.
 * @size: The size array's dimensions.
 * Description: makes use of the Lomuto partitioning technique. Prints
 *      after each two-element swap, the array.
 */

void quick_sort(int *array,
size_t size)
{

if (array == NULL || size < 2)
return;
quick_sort_lomuto(array, size, 0, size - 1);

}