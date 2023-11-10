#include "lists.h"
/**
 * sum_dlistint - sum all the data (n) of a dlistint_t linked list.
 * @head: head of the dlistint_t.
 * Return: the sum of all the data (n) of a dlistint_t linked list.
*/
int sum_dlistint(dlistint_t *head)
{
	/* declare variables */
	int sum;
	dlistint_t *temp;

	sum = 0;
	/* traverse the list and sum the element*/
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
