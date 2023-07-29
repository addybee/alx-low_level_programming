#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to list_t
 * @str: string to be added
 * Return:the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last_node;
	char *p, *temp;
	unsigned int len, index;

	if (str == NULL || head == NULL)
		return (NULL);
	temp = (char *)strdup(str);
	if (!temp)
		return (NULL);
	len = _strlen(temp);
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (index = 0; temp[index]; index++)
		p[index] = temp[index];
	p[index] = '\0';
	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(p);
		return (NULL);
	}
	new->str = p;
	new->len = index;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new;
	return (new);
}

/**
 * _strlen - return the length of a string
 * @s: pointer variable of char type
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int counter, i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
