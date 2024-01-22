#include "sort.h"
#include <stdbool.h>

/**
* swap - Swaps the values of two integers
*
* @xp: Pointer to the first integer
* @yp: Pointer to the second integer
*/
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

/**
* bubble_sort - Sorts an array of integers in ascending order using the
*               Bubble Sort algorithm and prints the array after each pass.
*
* @array: The array to be sorted
* @size: Number of elements in the array
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int swapped;

for (i = 0; i < size - 1; i++)
{
swapped = 0;

for (j = 0; j < size - i - 1; j++)
{

if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
swapped = true;
print_array(array, size);
}
/*print_array(array, size);*/
}
/* print_array(array, size);*/


/* If no two elements are swapped by inner loop, the break */
if (!swapped)
break;
}
}
