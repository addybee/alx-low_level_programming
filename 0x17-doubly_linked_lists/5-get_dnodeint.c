#include "lists.h"
/**
 * get_dnodeint_at_index - get  nth node of a dlistint_t linked list.
 * @head: head of the dlistint_t.
 * @index: nth node to be found
 * Return: pointer to node of type dlistint_t.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* declare variables */
	dlistint_t *temp;
	unsigned int i;

	/* check for valid input arguement */
	if (!head)
		return (NULL);
	temp = head;
	/* find the length of the list */
	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	if (index > i - 1)
		return (NULL);
	/* traverse the list to the nth node*/
	temp = head;
	i = 0;
	while (index != i)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
