#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: the head node, but it's a doule pointer. Crazy.
 * @str: - data to be stored in new node
 * Return: address of the new element or null if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node_ptr = (list_t *)malloc(sizeof(list_t));
size_t i = 0;

if (node_ptr == NULL)
return (NULL);

while (str[i])
i++;
node_ptr->len = i;
node_ptr->str = strdup(str);
node_ptr->next = *head;
*head = node_ptr;
return (*head);
}
