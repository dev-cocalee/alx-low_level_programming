#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: pointer to the head node in the list_t list
 * Return: elements count in list_T list
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count += 1;
h = h->next;
}
return (count);
}
