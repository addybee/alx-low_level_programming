#include "function_pointers.h"
/**
 * array_iterator - xecutes a function given as a parameter on each element of
 * an array.
 * @array: pointer to the array
 * @size: the size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array && action && size)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
