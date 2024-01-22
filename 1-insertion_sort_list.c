#include "sort.h"
/**
* insertion_sort_list - performs a swap operation every time
*                       it finds an element that is smaller that prev
* @list: pointer to pointe of list
* Return: nothing
**/
void insertion_sort_list(listint_t **list)
{

listint_t *current;
listint_t *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}

current = (*list)->next;

while (current != NULL)
{
temp = current;
while (temp != *list && temp->n < temp->prev->n)
{
temp->prev->next = temp->next;
if (temp->next != NULL)
{
temp->next->prev = temp->prev;
}
temp->next = temp->prev;
temp->prev = temp->prev->prev;
temp->next->prev = temp;
if (temp->prev != NULL)
{
temp->prev->next = temp;
}
else
{
*list = temp;
}
print_list(*list);
}
current = current->next;
}
}

