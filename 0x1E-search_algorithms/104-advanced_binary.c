#include "search_algos.h"
#include <stdio.h>
int advanced_binary_h(int *array, int l, int size, int value);
void print_number(int n);
void _putchar(char x);
void print_array(int *array, int l, int r);

/**
 * advanced_binary - Searches for a value in an array using advanced binary
 * search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	return (advanced_binary_h(array, left, right, value));
}

/**
 * advanced_binary_h - Searches for a value in an array using advanced binary
 * algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: last index in the array + 1.
 * @value: Value to search for.
 * @l: Starting index of the range.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int advanced_binary_h(int *array, int l, int size, int value)
{
	int left = l, m;
	int right = size;

	if (left >= right)
	{
		if (array[left] != value)
		{
			/* Print value being checked */
			print_array(array, left, (right + 1));
			return (-1);
		}
		return (left);
	}

	m = left + (right - left) / 2;

	/* Print value being checked */
	print_array(array, left, (right + 1));

	/* If value is found, return its index */
	if (array[m] < value)
		return (advanced_binary_h(array, m + 1, right, value));
	else
		return (advanced_binary_h(array, left, m, value));

}

/**
 * _putchar - Displays a character on standard output.
 * @x: The character to be printed.
 *
 * Return: 0 when successful.
 */
void _putchar(char x)
{
	write(STDOUT_FILENO, &x, 1);
}

/**
 * print_array - Prints the elements of an array within a specified range.
 *
 * @array: Pointer to the array.
 * @l: Starting index of the range.
 * @r: Ending index of the range.
 */
void print_array(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
	{
		printf("%d", array[i]);
		if (i == (r - 1))
			continue;
		printf(", ");
	}
	putchar('\n');
}
