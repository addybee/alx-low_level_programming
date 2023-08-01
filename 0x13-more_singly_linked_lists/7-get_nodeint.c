#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list.
 * @head: head of the listint_t.
 * @index: nth node to be found
 * Return: pointer to node of type listint_t.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declare variables */
	listint_t *tem_ptr;
	unsigned int i;

	/* check for valid input arguement */
	if (!head)
		exit(0);
	tem_ptr = head;
	/* find the length of the list */
	for (i = 0; tem_ptr->next != NULL; i++)
		tem_ptr = tem_ptr->next;
	if (index > i)
		exit(0);
	/* traverse the list to the nth node*/
	tem_ptr = head;
	while (index >= 1 && tem_ptr != NULL)
	{
		tem_ptr = tem_ptr->next;
		index--;
	}
	return (tem_ptr);
}
