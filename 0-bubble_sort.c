#include "sort.h"

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i+)
    {
        swapped = false;
        for (j = 0; j < n - i -j; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        /* If no two elements are swapped by inner loop, the break */
        if (swapped == false)
            break;
    }
}
