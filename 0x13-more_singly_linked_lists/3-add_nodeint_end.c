#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to head of listint_t.
 * @n: new element of the list.
 * return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *temp;

    if (!head)
        return (NULL);
    new = malloc(sizeof(listint_t *));
    if (!new)
        return (NULL);
    new->n = (int)n;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        return (new);
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
    }
    temp->next = new;
    return (new);
}