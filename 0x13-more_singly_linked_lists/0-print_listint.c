#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of the listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;
	listint_t *temp;

	num_nodes = 0;
	temp = (listint_t *)h;
	if (h == NULL)
		return (num_nodes);
	while (temp->next != NULL)
	{
		num_nodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	printf("%d\n", temp->n);
	return (++num_nodes);
}
