#include "search_algos.h"
#include <math.h>

void _putchar(char x);
void print_number(int n);
void _puts(char *str);

/**
 * jump_search - Searches for a value in an array using jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev, i;
	/* Check if array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the step size */
	step = sqrt(size);

	/* Initialize previous index */
	prev = 0;

	/** Perform jump search */
	while (array[prev] < value)
	{
		int jump;

		/* Print value being checked */
		_puts("Value checked array[");
		print_number(prev);
		_puts("] = [");
		print_number(array[prev]);
		_putchar(']');
		_putchar('\n');

		/* Calculate the jump index */
		jump = fmin(size - 1, prev + step);

		/* Check if value is within the block or if no progress is made */
		if (array[jump] >= value || jump == prev)
		{
			_puts("Value found between indexes [");
			print_number(prev);
			_puts("] and [");
			print_number(prev + step);
			_putchar(']');
			_putchar('\n');
			break;
		}

		/* Update previous index */
		prev += step;
	}

	/* Perform linear search within the block */
	for (i = prev; i <= fmin(size - 1, prev + step); i++)
	{
		/* Print value being checked */
		_puts("Value checked array[");
		print_number(i);
		_puts("] = [");
		print_number(array[i]);
		_putchar(']');
		_putchar('\n');
		/* Check if value is found */
		if (array[i] == value)
			return (i);
	}

	/** Return -1 if value is not found */
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
