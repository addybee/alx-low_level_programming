#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: holds the singly list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
    const list_t *temp;
    size_t num_nodes;

    num_nodes = 0;
    temp = h;
    for (; temp->next != NULL; num_nodes++)
    {
        temp = temp->next;
    }
    num_nodes++;
    return (num_nodes);
}