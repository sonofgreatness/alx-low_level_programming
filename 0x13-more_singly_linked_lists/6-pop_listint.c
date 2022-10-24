#include "lists.h"
/* POP A LIST*/
/*
*pop_listint - delete first elementin list ,
*   returns deleted element or 0 if list is empty
* @head pointer to pointer to list in question
*/
int
/*function definition*/
pop_listint(listint_t **head)
{

listint_t *first_node;
int n;
	if ((*head) == NULL)/*list is empty*/
		return (0);
	first_node = *head;
	*head = (*head)->next;
	n = first_node->n;
	free(first_node);
		return (n);

}
