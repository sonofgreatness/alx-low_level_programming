#include "lists.h"
/*GETS ELEMENTS AT INDEX*/

/*
 *get_nodeint_at_index - returns a struct at inex position index
 *@head - pointer to pointer to list from which to get node
 * index - the chronological position of the node in the list
*/
listint_t
/*function definition*/
*get_nodeint_at_index(listint_t *head, unsigned int index)
{
/*
*Begin LOOP (iterative from 0 to index)
*set node_to_return to first element in list
*if second elemnt in list != NULL
*set 1st elmt = 2nd element
* else
*return NULL
* END
*/


unsigned int i;
listint_t *node;

if (head == NULL)/*can't find list*/
	return (NULL);
for (i = 0; i <= index; i++)
{
	if (head->next != NULL)
		head = head->next;
	else
		return (NULL);

}
node = head;
return (node);
}
