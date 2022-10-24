#include "lists.h"
/*****************ADDS A NEW NODE******************/
/*
 *add_nodeint() -> adds a node to a list
 *@head -> pointer to a pointer to the list in question
 *@ n -> values of new node;
*/
listint_t
/*function definition*/
*add_nodeint(listint_t **head, const int n)
{

/*idea is create a new node the point tho *head */
listint_t *new_node_ptr;
new_node_ptr = malloc(sizeof(listint_t));


	if (new_node_ptr == NULL)/*failed to initialize*/
		return (NULL);
new_node_ptr->n = n;
new_node_ptr->next = *head;
*head = new_node_ptr;

return (*head);
}
