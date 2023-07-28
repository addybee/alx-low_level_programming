#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: head of list to free
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next_list;

	if (head == NULL)
		return;
	next_list = head->next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = next_list;
		if (head != NULL)
			next_list = head->next;
	}
}
