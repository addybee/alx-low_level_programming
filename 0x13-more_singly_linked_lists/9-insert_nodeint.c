#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the listint head.
 * @idx: the index of the list where the new node should be added.
 * @n: new data to be inserted.
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tem_ptr, *new;
	unsigned int i;

	/* validate input arguement*/
	tem_ptr = *head;
	for (i = 0; tem_ptr != NULL; i++)
		tem_ptr = tem_ptr->next;
	if (idx > i || !head)
		return (NULL);
	/* create new node memory*/
	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	/* traverse the list to the position and insert*/
	if (*head == NULL)
		*head = new;
	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		tem_ptr = *head;
		for (; idx != 1; tem_ptr = tem_ptr->next)
			idx--;
		printf("element: %u\n", i);
		new->next = tem_ptr->next;
		tem_ptr->next = new;
	}
	return (new);
}
