#include "lists.h"
/*******INSERTS A NODE AT A POSITION ********/
/*
* insert_nodeint_at_index - adds a node at a given position of list
* @head - pointer to pointer of list
*@idx - the position in which to add the node
* @n the value of node to be added
*/
listint_t
/*function definitio*/
*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

unsigned int i;
listint_t *new_node_ptr, *current_node, *current_node2;

new_node_ptr = malloc(sizeof(listint_t));
new_node_ptr->n = n;


if (*head == NULL)
	return (NULL);

current_node = *head;
for (i = 0; i < idx; i++)
{
if (current_node->next == NULL)
	return (NULL);
current_node = current_node->next;
}
/*here current node->next is the index we want*/
current_node2  = current_node->next;
current_node->next = new_node_ptr;
new_node_ptr->next = current_node2->next;

return (*head);
}
