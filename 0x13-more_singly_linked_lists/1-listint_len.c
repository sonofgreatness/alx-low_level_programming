#include "lists.h"
/*
 * listint_len -> returns number of elements inlist
 * @h -> argument (of type : pointer  to a struct)
*/
size_t
/*function defintion*/
listint_len(const listint_t *h)
{
size_t size = 0;
while (h != NULL)
{

	if (h->next == NULL)
	{
		size++;
		return (size);
	}
	else
		h = h->next;
size++;
}
return (size);
}
