#include "lists.h"
/*PRINTS THE SUM OF ALL NODE(VALUES)*/
/*
*sum_listint_t - returns sum of all list elements
*@ head pointer to a list
*/
int
/*function definition*/
sum_listint(listint_t *head)
{
int sum;
sum = 0;
if (head == NULL)/*list is not found*/
	return (0);
if (head->next == NULL)
	return (head->n);

while (head != NULL)
{
sum = sum + head->n;

if (head->next == NULL)/*last element in list*/
	return (sum);
head = head->next;
}
return (sum);
}
