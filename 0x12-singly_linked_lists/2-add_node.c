#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_note - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to list_t
 * @str: string to be added
 * Return:the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->str = strdup(str);
    new->len = _strlen(new->str);
    new->next = *head;
    *head = new;
    return (*head);
}

/**
 * _strlen - return the length of a string
 * @s: pointer variable of char type
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int counter, i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}