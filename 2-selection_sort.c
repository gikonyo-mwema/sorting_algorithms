#include "sort.h"

/**
* swap_int - Swaps the values of two integers
* @a: The first integer to be swapped
* @b: The second integer to be swapped
*/
void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}

/**
* selection_sort - Sorts an array of integers in ascending order
* @array: The array to be sorted
* @size: Number of elements in the array
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
min_idx = j;
}

if (min_idx != i)
{
swap_int(&array[min_idx], &array[i]);
print_array(array, size);
}
}
}
