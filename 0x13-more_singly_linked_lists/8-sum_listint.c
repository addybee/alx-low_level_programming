#include "lists.h"
/**
 * sum_listint - sum all the data (n) of a listint_t linked list.
 * @head: head of the listint_t.
 * Return: the sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	/* declare variables */
	int sum;
	listint_t *tem_ptr;

	sum = 0;
	/* check the input if valid */
	if (!head)
	{
		return (sum);
	}
	/* traverse the list and sum the element*/
	if (head->next == NULL)
	{
		return (head->n);
	}
	tem_ptr = head;
	while (tem_ptr != NULL)
	{
	    sum += tem_ptr->n;
	    tem_ptr = tem_ptr->next;
	}
	return (sum);
}
