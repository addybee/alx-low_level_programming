#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: integer size
 * Return: void
 */
void print_square(int size)
{
	int n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 0; i < n; i++)
		{
			for (k = 0; k < n; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
