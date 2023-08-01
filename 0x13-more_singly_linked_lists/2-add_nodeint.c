#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer to head of listint_t
 * @n: new element of the list.
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t *));
	if (!new)
		return (NULL);
	new->n = (int)n;
	new->next = NULL;
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
