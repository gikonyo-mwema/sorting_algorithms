#include "sort.h"
#include <stdbool.h>

/**
* swap - Swaps the values of two integers
*
* @xp: Pointer to the first integer
* @yp: Pointer to the second integer
* Return: nothing
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
* Return: nothing.
*/
void bubble_sort(int *array, size_t size)
{
unsigned int i, j;

if (array == NULL || size <= 0)
return;

for (i = 0; i < size - 1; i++)
{

for (j = 0; j < size - 1; j++)
{

if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
}
}
}
}
