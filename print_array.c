#include <stdio.h>
#include <stdlib.h>


/**
 * print_array - displays a list of integers
 *
 * @array: The list of items to print
 * 
 * @size: Elements in @array, number
 */
void print_array(const int *array,
size_t size)
{
size_t i;

i = 0;
while (array &&
i < size)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
++i;
}
printf("\n");
}