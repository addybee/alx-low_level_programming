#include "search_algos.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int min(int a, int b);
listint_t *node_at_index(listint_t *list, size_t index);

/**
 * jump_list - Searches for a value in a list using
 * jump search algorithm.
 *
 * @list: Pointer to the head of the list to search.
 * @size: Number of elements in the list.
 * @value: Value to search for.
 *
 * Return: node of the value if found, otherwise NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i;
	int step, prev;

	if (!list || !size)
		return (NULL);

	/* Calculate the step size */
	step = sqrt(size);

	/* Initialize previous index */
	prev = 0;

	/* Perform jump search */
	while (node_at_index(list, min(step, (size - 1)))->n < value)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= (int)size)
		{
			step = prev;
			prev = step - (int)sqrt(size);
			break;
		}
		/* Print value being checked */
		printf("Value checked array[%d] = [%d]\n", prev,
		 node_at_index(list, prev)->n);
	}
	/* Print value being checked */
	printf("Value checked array[%d] = [%d]\n", min(step, (size - 1)),
		node_at_index(list, min(step, (size - 1)))->n);
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	/* Perform linear search within the block */
	for (i = prev; i < (size_t)min(step + 1, size); i++)
	{
		listint_t *val = node_at_index(list, i);
		/* Print value being checked */
		printf("Value checked array[%lu] = [%d]\n", i, val->n);

		/* If value is found, return its index */
		if (val->n == value)
		{
			return (val);
		}
	}
	/* Return -1 if value is not found */
	return (NULL);
}


/**
 * min - Returns the minimum of two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The minimum of @a and @b.
 */
int min(int a, int b)
{
	/* Check if b is less than a */
	if (b > a)
		return (a); /* Return a if b is greater */
	else
		return (b); /* Return b if b is less than or equal to a */
}

/**
 * node_at_index - Returns a pointer to the node at the given
 * index in a linked list.
 *
 * @list: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: A pointer to the node at the given index, or
 * NULL if the index is out of bounds.
 */
listint_t *node_at_index(listint_t *list, size_t index)
{
	listint_t *res_node = list;

	while (index--)
	{
		res_node = res_node->next;
	}
	return (res_node);
}
