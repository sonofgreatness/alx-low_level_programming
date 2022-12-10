#include "lists.h"
/*
function that returns the number of elements in
a linked dlistint_t list.
*/
size_t
/*FUNCTION DEFINITION */
dlistint_len(const dlistint_t *h)
{
size_t len_t;

len_t = 0;
	if (h == NULL)
	{
		return (0);
	}
	len_t++;
	while (h->next != NULL)
	{
		len_t++;
		h = h->next;
	}


	return (len_t);
}
