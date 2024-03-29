#ifndef _SORT_H
#define _SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/** Function Prototypes **/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

/** Helper Function prototypes **/
void swap(int *xp, int *yp);
void swap_int(int *a, int *b);
void quick_sort_helper(int array[], int low, int high, size_t size);
int partition(int array[], int low, int high, size_t size);
void swapped(int *a, int *b, int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
#endif

