#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to the listint head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t * temp;
	
	if (!head)
		return;
	temp = *head;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head  = temp;
	}
	free(*head);
	*head = NULL;
}
