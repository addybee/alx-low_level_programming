#include "search_algos.h"

int advanced_binary_h(int *array, int l, int size, int value);
void print_number(int n);
void _puts(char *str);
void _putchar(char x);

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
	int right = (int)size;

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
	int left = l;
	int right = size;


	/* Iterate through the array */
	if (left < right)
	{
		int i = 0;
		int m = (left + right) / 2;

		/* Print value being checked */
		_puts("Searching in array: ");
		/* Loop through the array from index 'l' to index 'r' */
		for (i = left; i < right; i++)
		{
			/* Print the element at index 'i' */
			print_number(array[i]);

			/* If 'i' is not the last index, print a comma and space */
			if (i != (right - 1))
				_puts(", ");
		}
		_putchar('\n');

		/* If value is found, return its index */
		if (array[m] < value)
			return (advanced_binary_h(array, m + 1, right, value));
		if (array[m] > value)
			return (advanced_binary_h(array, left, m, value));
		if (array[m] == value)
		{
			if (array[m - 1] == value)
				return (m - 1);
			return (m);
		}

	}
	/* Value not found */
	return (-1);
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int digit, div, t;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	t = n;
	digit = 1;

	/* Count the number of digits */
	while (t /= 10)
		digit++;

	/* Print each digit */
	while (digit--)
	{
		div = 1;
		for (t = 1; t <= digit; t++)
			div *= 10;
		_putchar('0' + (n / div));
		n %= div;
	}
}

/**
 * _puts - Prints a string, without a new line, to stdout.
 * @str: Pointer to the string to be printed.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
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
