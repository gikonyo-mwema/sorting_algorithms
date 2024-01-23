#include "sort.h"

/**
* swapping - Swaps the values of two integers and prints the array
*
* @xp: Pointer to the first integer
* @yp: Pointer to the second integer
* @array: The array being sorted
* @size: Size of the array
*/
void swapping(int *xp, int *yp, int *array, size_t size)
{
int temp = *xp;

*xp = *yp;
*yp = temp;
print_array(array, size);
}

/**
* selection_sort - Sorts an array of integers in ascending order
* using the Selection sort algorithm
*
* @array: The array to be sorted
* @size: Size of the array
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;

/* One by one move boundary of unsorted subarrary */
for (i = 0; i < size - 1; i++)
{
/* Find the minimum element in unsorted array */
min_idx = i;
for (j = i + 1; j < size; j++)
if (array[j] < array[min_idx])
min_idx = j;

/* Swap the found min element with the first element */
if (min_idx != 1)
swapping(&array[min_idx], &array[i], array, size);
}
}
