#include "lists.h"
/*
*Function that prints all the elements
*of a dlistint_t list.
*/
size_t
/*DEFINITION*/
print_dlistint(const dlistint_t *h)
{
size_t sum_of_nodes = 0;
if (h == NULL)
	return(0); 
if (h != NULL)
sum_of_nodes++;

while (h->next != NULL)
{
sum_of_nodes++;
printf("%d\n", h->n);
h = h->next;
printf("%d\n", h->n);
}

return (sum_of_nodes);
}
