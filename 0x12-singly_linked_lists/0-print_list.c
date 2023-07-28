#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: holds the singly list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
    const list_t *temp;
    long unsigned int num_nodes;

    num_nodes = 0;
    temp = h;
    for (; temp->next != NULL; num_nodes++)
    {
        if (temp->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", temp->len, temp->str);   ;
        temp = temp->next;
    }
    num_nodes++;
    printf("[%u] %s\n", temp->len, temp->str);
    return (num_nodes);
}