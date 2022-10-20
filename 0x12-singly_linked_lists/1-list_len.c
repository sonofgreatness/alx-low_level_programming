#include "lists.h"
/*****PRINT LIST****/
/* print_list - prints all the elements of a list
* @list_h -> LIST
*/

size_t list_len(const list_t *h)
{
	int count;
	count = 0;
if ((*h).str == NULL)
{

	printf("[0] (nil)");
	count++;
}
else
{

	count = sizeof(*h) / sizeof(list_t);
	count++;
}
return ((size_t)count);
}
