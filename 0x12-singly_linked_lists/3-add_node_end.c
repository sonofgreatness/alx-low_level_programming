#include "lists.h"
/*
 *ADD NODE AT END
 *
 *
 *
*/

list_t *add_node_end(list_t **head, const char *str)
{
/*traverse list to find end and change pointer*/

list_t *new_node,*current_node;
size_t size;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
new_node->str = strdup(str);
new_node->str =strdup(str); 
for (size = 0; str[size]; size++)
	;
new_node->len = size;
new_node->next = NULL;
current_node = *head;

if (current_node == NULL)
{
*head = new_node;
}
else
{
	while(current_node->next != NULL)
	{	
		current_node = current_node->next;
	}
current_node = new_node;
}
return (*head);

}
