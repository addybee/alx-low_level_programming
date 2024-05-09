#include "search_algos.h"
#include <math.h>

void _putchar(char x);
void print_number(int n);
void _puts(char *str);

/**
 * interpolation_search - Searches for a value in an array using
 * interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	/* Check if array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	pos = ((double)(high - low) * (value - array[low]));
	pos = low + (int)(pos / (array[high] - array[low]));
	print_number(pos);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = ((double)(high - low) * (value - array[low]));
		pos = low + (pos / (array[high] - array[low]));
		/* Print value being checked */
		_puts("Value checked array[");
		print_number(pos);
		_puts("] = [");
		print_number(array[pos]);
		_putchar(']');
		_putchar('\n');
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	/* Print out of range index */
	_puts("Value checked array[");
	print_number(pos);
	_puts("] is out of range\n");
	/* Return -1 if value is not found */
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
