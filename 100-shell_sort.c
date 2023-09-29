#include "sort.h"
/**
 * swaping_integers - Swap Alternate two integers in an array.
 *
 * @j: the initial swapped integer to swap.
 *
 * @i: The next integer to be swapped swap.
 *
 */


void swaping_integers(int *j, int *i)
{

int temp1;
temp1 = *j;
*j = *i;
*i = temp1;

}

/**
 * shell_sort - Sort integer arrays in ascending order.
 *     shell sort algorithm is used to organise.
 *
 * @array: a collection of integers in an array.
 *
 * @size: The size array's dimensions.
 *
 * Description: utilizes Knuth's hierarchy of intervals.
 *
 */
void shell_sort(int *array, size_t size)
{
size_t x,
i, y;

if (array == NULL ||
size < 2)
return;

x = 1;
while (x < (size / 3))
x = x * 3 + 1;

while (x >= 1)
{
i = x;
while (i < size)
{
y = i;
while (y >= x &&
array[y - x] > array[y])
{
swaping_integers(array + y,
array + (y - x));
y -= x;
}
i++;
}
x /= 3;
print_array(array, size);
}
}