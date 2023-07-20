#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the 1st element for which the cmp func does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
