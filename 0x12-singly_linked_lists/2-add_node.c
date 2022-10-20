#include "lists.h"
/*add node to an exixting list*/
list_t 
/*fuction definition*/
*add_node(list_t **head, const char *str)
{

size_t size;
list_t *new_list;

new_list = malloc(sizeof(list_t));
if (new_list == NULL)/*failed to initialize*/
	return (NULL);
new_list->str = strdup(str);
for (size = 0;str[size];size++) /*incrementing variaable using a loop*/
	; 
new_list->len =size; 
new_list-> next = *head;
*head = new_list;
return (*head);
}
