#include "sort.h"

/**
* swapped - Swaps the values of two integers
*
* @a: Pointer to the first integer
* @b: Pointer to the second integer
* @array: The array being sorted
* @size: Size of the array
*/
void swapped(int *a, int *b, int *array, size_t size)
{
if (*a != *b)
{
int temp = *a;
*a = *b;
*b = temp;
print_array(array, size);
}
}


/**
* partition - Partitions the array around a pivot
*
* @array: The array to be partitioned
* @low: Index of the first element
* @high: Index of the last element
* @size: Size of the array
*
* Return: The partition index
*/
int partition(int array[], int low, int high, size_t size)
{
int pivot;
int i, j;

pivot = array[high];
i = (low - 1);

for (j = low; j <= high - 1; j++)
{
if (array[j] < pivot)
{
i++;
swapped(&array[i], &array[j], array, size);
}
}
swapped(&array[i + 1], &array[high], array, size);
return (i + 1);
}

/**
* quick_sort_helper - Implements the QuickSort algorithm
*
* @array: The array to be sorted
* @low: Index of the first element
* @high: Index of the last element
* @size: Size of the array
*/
void quick_sort_helper(int array[], int low, int high, size_t size)
{
int pi;

if (low < high)
{
pi = partition(array, low, high, size);
quick_sort_helper(array, low, pi - 1, size);
quick_sort_helper(array, pi + 1, high, size);
}
}

/**
* quick_sort - Calls quick_sort_helper with appropriate initial indices
*
* @array: The array to be sorted
* @size: Size of the array
*/
void quick_sort(int array[], size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_helper(array, 0, size - 1, size);
}
