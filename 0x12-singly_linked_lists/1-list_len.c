#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: holds the singly list
 * Return: the number of elements in a linked list_t list.
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t num_nodes;

	num_nodes = 0;
	temp = h;
	for (; temp; num_nodes++)
	{
		temp = temp->next;
	}
	return (num_nodes);
}
