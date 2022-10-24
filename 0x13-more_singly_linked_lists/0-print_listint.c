#include "lists.h"
/*
* print_listint --prints all the elements of linked ist
*@listint_t h -> argument (of type struct )
*
*/
size_t
/*function definition*/
print_listint(const listint_t *h)
{
size_t size;
size = 0;
while (h != NULL)
{
	if ((*h).next == NULL) /*exit loop */
	{
	size++;
	printf("%d\n", (*h).n);
	return (size);
	}
	else
	{
		size++;
		printf("%d\n", (*h).n);
					h = (*h).next;

	}
}
return (size);
}
