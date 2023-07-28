#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to list_t
 * @str: string to be added
 * Return:the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *n_str, *p;
	list_t *new, *l_node = NULL;
	int len = 0;

	if (str != NULL)
	{
		n_str = (char *)strdup(str);
		len = _strlen(n_str);
		p = malloc(sizeof(char) * (len + 1));
		if (p == NULL)
			return (NULL);
		while (n_str)
			*p++ = *n_str++;
	}
	else
		n_str = NULL;

	if (*head != NULL)
	{
		l_node = *head;
		while (l_node->next != NULL)
			l_node = l_node->next;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(p);
		return (NULL);
	}

	if (*head == NULL)
		*head = new;
	if (l_node != NULL)
		l_node->next = new;
	new->str = p;
	new->len = len;
	return (new);
}
