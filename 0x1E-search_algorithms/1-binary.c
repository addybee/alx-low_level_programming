#include "search_algos.h"

void _putchar(char x);
void print_number(int n);
void _puts(char *str);

/**
 * binary_search - Searches for a value in an array using binary search
 * algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate through the array */
	while (left <= right)
	{
		int i;
		int m = (left + right) / 2;

		/* Print value being checked */
		_puts("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			print_number(array[i]);
			if (i != right)
				_puts(", ");
		}
		_putchar('\n');

		/* If value is found, return its index */
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
	/* Value not found */
	return (-1);
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
		_putchar('0' + n / div);
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
