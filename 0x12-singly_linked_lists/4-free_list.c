#include "lists.h"
/*frees a list*/
void free_list(list_t *head)
{

list_t *current_head;
while ((current_head = head) != NULL)
{
head = head->next;

free(current_head->str);
free(current_head);
}
}
