#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: pointer to pointer to the listint head.
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	/* declare pointers and variables to be used */
	int _data;
	listint_t *tem_ptr;

	/* check if input is valid */
	if (!head || *head == NULL)
		return (0);
	/* initilize pointers and variable */
	_data = (*head)->n;
	tem_ptr = *head;
	/* delete the head node and free the memory */
	*head = (*head)->next;
	free(tem_ptr);
	return (_data);
}

