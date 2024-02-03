#include <stdio.h>
#include "sort.h"
/**
 * shell_sort - Sorts an array of integers in ascending order using the
 *              Shell sort algorithm with the Knuth sequence.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: This function sorts an array of integers in ascending order
 *              using the Shell sort algorithm. It uses the Knuth sequence
 *              for the gap sequence. The function prints the array each time
 *              the interval (gap) size is decreased.
 */

void shell_sort(int *array, size_t size)
{
size_t gap, i, j;
int temp;

/* Start with the largerst gap and work down to a gap of 1 */
for (gap = 1; gap < size; gap = 3 * gap + 1)
;

/* Do a gapped insertion sort for this gap size */
for (gap /= 3; gap > 0; gap /= 3)
{
/* From the first element of gap,perform insertion sort */
for (i = gap; i < size; i++)
{
/* Save the current element and make a hole */
temp = array[i];

/* Shift earlier gap-sorted elemetn up until the right place */
for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
array[j] = array[j - gap];

/* Put the temp (the original array[i]) in its correct place */
array[j] = temp;
}

/* Print the array each time you decrease the interval */
print_array(array, size);
}
}
