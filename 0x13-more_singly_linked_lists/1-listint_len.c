#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of the listint_t.
 * Return:  number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	size_t num_nodes;

	num_nodes = 0;
	temp = (listint_t *)h;
	if (h == NULL)
		return (num_nodes);
	while (temp->next != NULL)
	{
		num_nodes++;
		temp = temp->next;
	}
	return (++num_nodes);
}
