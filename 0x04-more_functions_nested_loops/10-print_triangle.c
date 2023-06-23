#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: integer size
 * Return: void
 */
void print_triangle(int size)
{
	int n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k, m;

		for (i = 1; i <= n; i++)
		{
			int j = n - (n - i);
			int l = n - i;

			for (k = 1; k <= l; k++)
				_putchar(' ');
			for (m = 1; m <= j; m++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
