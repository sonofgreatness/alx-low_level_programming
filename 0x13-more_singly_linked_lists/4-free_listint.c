#include "lists.h"
/*FREES A GIVEN LIST*/
/*
 * @head , pointer to list
*/
void free_listint(listint_t *head)
{
listint_t *current_node;
while ((current_node =  head) != NULL)
{
head = head->next;
free(current_node);
}
}
