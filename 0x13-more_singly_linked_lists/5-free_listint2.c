#include "lists.h"
/* FREES MEMORY ALLOCATED TO  A LIST  LIST*/
/*
* free_listint2 - frees all memory locations then sets the head to NULL
* @head pointer to pointer to list in question
*/
void
/*function definition*/
free_listint2(listint_t **head)
{
/*
 * fist do the normal freeing then
 * set the head to null
*/
listint_t *current_node;
while ((current_node = *head) != NULL)
{
	*head = (*head)->next;
	free(current_node);
}
*head = NULL;
}
