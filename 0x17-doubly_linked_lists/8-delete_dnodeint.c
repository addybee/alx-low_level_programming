#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to pointer to the dlistint list head.
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* declare variables */
	dlistint_t *temp;
	unsigned int i;

	/* find the length of the list */
	temp = *head;
	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	/* check for valid input arguement */
	if (!head || index >= i || *head == NULL)
		return (-1);
	else if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(temp);
		temp = NULL;
	}
	else
	{
		/* traverse the list to the nth node*/
		temp = *head;
		i = 0;
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
		temp = NULL;
	}
	return (1);
}
