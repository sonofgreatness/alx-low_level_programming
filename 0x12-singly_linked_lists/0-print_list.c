#include "lists.h"
/*****PRINT LIST****/
/* print_list - prints all the elements of a list
* @list_h -> LIST
*/

size_t print_list(const list_t *h)
{
	int count;
if ((*h).str == NULL)
{

	printf("[0] (nil)");
	count = 1;
}
else
{

	count = sizeof(*h) / sizeof(list_t);
}
return ((size_t)count);
}
