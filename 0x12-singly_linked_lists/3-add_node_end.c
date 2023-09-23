#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node
 * @str: string to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node_ptr = (list_t *)malloc(sizeof(list_t)), *temp_node_ptr = *head;
size_t i = 0;


if (node_ptr == NULL)
return (NULL);

while (str[i])
i++;

node_ptr->str = strdup(str);

if (node_ptr->str == NULL)
{
free(node_ptr);
return (NULL);
}

node_ptr->len = i;
node_ptr->next = NULL;

if (*head == NULL)
*head = node_ptr;

else
{
while (temp_node_ptr->next != NULL)
temp_node_ptr = temp_node_ptr->next;
temp_node_ptr->next = node_ptr;
}

return (*head);
}
