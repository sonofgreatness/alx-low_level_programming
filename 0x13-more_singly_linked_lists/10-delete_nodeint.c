#include "lists.h"
/****DELETES A NODE AT A POSITION****/
int
/*function definition*/
delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current_node, *current_node2;


if (*head == NULL)
	return (-1);
current_node = *head;

for (i = 0; i < index - 1 ; i++)
{
if (current_node->next == NULL)/*list ends before index reached*/
	return (-1);
current_node = current_node->next;
}

/*delete node*/
current_node2 = current_node->next;
current_node->next = current_node2->next;
free(current_node2);
free(current_node);
return (1);
}
