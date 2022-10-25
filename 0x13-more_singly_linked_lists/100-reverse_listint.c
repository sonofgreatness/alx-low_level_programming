#include "lists.h"
/******** REVERSE LIST*********/
/*
*revers_listint - reverses a given list
*@head - pointer to pointer to list in question
*/
listint_t
/*function definition*/
*reverse_listint(listint_t **head)
{
listint_t *reversed_list;
listint_t *swapper;

reversed_list = NULL;
swapper = NULL;

/*PLAN*/
if (*head == NULL)
	return (NULL);
while (*head != NULL)
{
swapper = (*head)->next;
(*head)->next = reversed_list;
reversed_list = *head;
*head = swapper;
}
*head = reversed_list;
return (*head);
}
