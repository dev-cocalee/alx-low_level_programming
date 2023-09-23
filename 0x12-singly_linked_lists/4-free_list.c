#include "lists.h"

/**
 * free_list - frees a list
 * @head: head node to the freed list
*/
void free_list(list_t *head)
{
list_t *freed_nodes_ptr;
while (head != NULL)
{
freed_nodes_ptr = head->next;
free(head->str);
free(head);
head = freed_nodes_ptr;
}
free(head);
}
