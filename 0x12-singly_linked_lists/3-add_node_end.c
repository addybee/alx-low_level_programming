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
    list_t *new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->str = strdup(str);
    new->len = _strlen(new->str);
    new->next = NULL;
    *head = new;
    return (*head);
}