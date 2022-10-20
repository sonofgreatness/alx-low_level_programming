#include "lists.h"
/*****PRINT LIST****/
/*
*  print_list - prints all the elements of a list
* @list_h -> LIST
*/

size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{

	h = h->next;
	count++;

	}

return (count);
}
