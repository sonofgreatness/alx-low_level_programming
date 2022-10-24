#include "lists.h"

/************** ADD NODE AT THE END ************/
/*
*add_nodeint_end-> adds node at end of a list,
*@ head -> pointer to a pointer to list in question
*/
listint_t 
/*fuction definiton*/
*add_nodeint_end(listint_t **head, const int n)
{
/*
* Define new node node(n,NULL)
* plan traverse through list till you reach The END
*change last node  pointer to next  to point to new Node
*/
listint_t *new_node_ptr, *current_node;
new_node_ptr = malloc(sizeof(listint_t));
	if (new_node_ptr == NULL)/*failed to initialize*/
		return (NULL);

new_node_ptr->n = n;
new_node_ptr->next = NULL;
current_node = *head;
	if (current_node == NULL)/*list is empty*/
		*head = new_node_ptr;
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node_ptr;
	}
return (*head);
}
