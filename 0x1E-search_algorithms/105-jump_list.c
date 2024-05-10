#include "search_algos.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int min(int a, int b);
listint_t *jump_list_help(listint_t **array, size_t size, int value);

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
	listint_t **arr;
	listint_t *result;

	if (!list || !size)
		return (NULL);

	arr = (listint_t **)malloc(size * sizeof(listint_t *));
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] =  list;
		list = list->next;
	}
	result = jump_list_help(arr, size, value);
	free(arr);
	return (result);
}



/**
 * jump_list_help - help Searches for a value in a list using
 * jump search algorithm.
 *
 * @array: Pointer to the node of the list to search.
 * @size: Number of elements in the list.
 * @value: Value to search for.
 *
 * Return: node of the value if found, otherwise NULL.
 */
listint_t *jump_list_help(listint_t **array, size_t size, int value)
{
	int step, prev, i;

	/* Calculate the step size */
	step = sqrt(size);

	/* Initialize previous index */
	prev = 0;
	/* Perform jump search */
	while (array[min(step, (size - 1))]->n < value)
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
		printf("Value checked array[%d] = [%d]\n",
		prev, array[prev]->n);
	}

	/* Print value being checked */
	printf("Value checked array[%d] = [%d]\n", min(step, (size - 1)),
	 array[min(step, (size - 1))]->n);
	printf("Value found between indexes [%d] and [%d]\n", prev,
	 min(step, (size - 1)));
	/* Perform linear search within the block */
	for (i = prev; i < min(step + 1, size); i++)
	{
		/* Print value being checked */
		printf("Value checked array[%d] = [%d]\n", i, array[i]->n);

		/* If value is found, return its index */
		if (array[i]->n == value)
		{
			return (array[i]);
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
