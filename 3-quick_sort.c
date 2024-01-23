#include "sort.h"

void swapped(int *a, int *b, int *array, size_t size)
{
    if(*a != *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
        print_array(array, size);
    }
}

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

void quick_sort(int array[], size_t size)
{
    quick_sort_helper(array, 0, size - 1, size);
}
