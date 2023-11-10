#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to the dlistint head.
 * @idx: the index of the list where the new node should be added.
 * @n: new data to be inserted.
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	/* validate input arguement*/
	temp = *h;
	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	if (idx > i || !h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, (const int)n));
	if (idx == i)
		return (add_dnodeint_end(h, (const int)n));
	/* create new node memory*/
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *h;
	i = 0;
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;
	return (new);
}
