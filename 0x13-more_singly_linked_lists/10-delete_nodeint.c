#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: pointer to pointer to the listint head.
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* declare variables */
	listint_t *tem_ptr, *tem_ptr2;
	unsigned int i;

	/* find the length of the list */
	tem_ptr = *head;
	for (i = 0; tem_ptr->next != NULL; i++)
		tem_ptr = tem_ptr->next;
	/* check for valid input arguement */
	if (!head || index > i)
		return (-1);
	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		tem_ptr = *head;
		*head = tem_ptr->next;
		free(tem_ptr);
		tem_ptr = NULL;
	}
	else
	{
		/* traverse the list to the nth node*/
		tem_ptr = *head;
		tem_ptr2 = *head;
		while (index != 1)
		{
		    tem_ptr2 = tem_ptr;
		    tem_ptr = tem_ptr->next;
		    index--;
		}
		tem_ptr2->next = tem_ptr->next;
		free(tem_ptr);
		tem_ptr = NULL;
	}
`	return (1);
}
